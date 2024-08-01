#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

// void solve(vector<int> &arr, vector<int> &temp, vector<vector<int>> &ans, int i, int target)
// {
//     if (target < 0)
//         return;
//     if (target == 0)
//     {
//         ans.push_back(temp);
//         return;
//     }
//     if (i >= arr.size())
//         return;

//     temp.push_back(arr[i]);
//     solve(arr, temp, ans, i, target - arr[i]);
//     temp.pop_back();
//     solve(arr, temp, ans, i + 1, target);
// }
void solve(vector<int> &arr, vector<int> &temp, vector<vector<int>> &ans, int index, int target){
    if(target  == 0){
        ans.push_back(temp);
        return;
    }
    if(target<0){
        return;
    }
    for(int i = index;i<arr.size();i++){
        temp.push_back(arr[i]);
        solve(arr,temp,ans,i,target-arr[i]);
        temp.pop_back();
    }
}


vector<vector<int>> combinationSum(vector<int> &arr, int target)
{
    vector<vector<int>> ans;
    vector<int> temp;
    solve(arr, temp, ans, 0, target);
    return ans;
}

int main()
{
    vector<int> arr{2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> ans = combinationSum(arr, target);
    for (auto it : ans)
    {
        for (auto x : it)
            cout << x << " ";
        cout << endl;
    }
}
