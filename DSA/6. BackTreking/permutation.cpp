#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> arr,vector<vector<int>>&ans,int i){
    if(i >= arr.size()){
        ans.push_back(arr);
        return;
    }

    for(int j = i;j<arr.size();j++){
        swap(arr[i],arr[j]);
        solve(arr,ans,i+1);
        swap(arr[i],arr[j]);
    }
}
int main(){
    vector<int> arr{1,2,3};
    vector<vector<int>> ans;
    solve(arr,ans,0);
    for(auto it:ans){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }

}