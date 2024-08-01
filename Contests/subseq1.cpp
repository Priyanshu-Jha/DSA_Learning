#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int>&arr,int k,int index,vector<int> &ans,vector<vector<int>>&result)
{
    if(index == k)
    {
        result.push_back(ans);
        return;
    }
    if(index>=arr.size() or index>k){
        return;
    }
    // for(int i = index;i<arr.size();i++){
        ans.push_back(arr[index]);
        solve(arr,k,index+1,ans,result);
        ans.pop_back();
        solve(arr,k,index,ans,result);
    // }
}
int main(){
    vector<int> arr{3,1,5,3,5,9,2};
    vector<vector<int>>result;
    vector<int> ans;
    int k = 4;
    solve(arr,k,0,ans,result);
    for(auto it:result){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
}