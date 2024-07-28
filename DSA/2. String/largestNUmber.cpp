#include<bits/stdc++.h>
using namespace std;
static bool comp(string s1,string s2){
        string a = s1+s2;
        string b = s2+s1;
        return a>b;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> ans ;
        for(auto it: nums){
            ans.push_back(to_string(it));
        }
        sort(ans.begin(),ans.end(),comp);
        if(ans[0] == "0")
            return "0";
        string result;
        for(auto it: ans)
            result +=it;
        return result;
    }
int main(){
    vector<int> nums{3,30,34,5,9};
    cout<<largestNumber(nums);
    
}