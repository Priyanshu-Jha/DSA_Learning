#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<unordered_map>
using namespace std;
 void solve(vector<int>& arr, vector<int>& temp, vector<vector<int>>& ans,
               int index, int target) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        if (target < 0) {
            return;
        }
        for (int i = index; i < arr.size(); i++) {
            temp.push_back(arr[i]);
            solve(arr, temp, ans, i+1, target - arr[i]);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        vector<int> temp;
        set<vector<int>> st;
        solve(arr, temp, ans, 0, target);

        for (auto it : ans)
            st.insert(it);
        ans.clear();
        for(auto it: st)
            ans.push_back(it);
        return ans;
    }

int main(){


}
