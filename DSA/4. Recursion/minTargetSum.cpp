#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int> arr,int target){
    if(target == 0)
        return 0;
    if(target<0)
        return INT_MAX;
    int mini = INT_MAX;
    for(int i = 0;i<arr.size();i++){
        int ans = 1 + solve(arr,target-arr[i]);
        if(ans!=INT_MAX and ans != INT_MIN)
            mini = min(mini,ans);
    }
    return mini;
}
int main(){
    vector<int> arr{1,2,3,4,5};
    cout<<solve(arr,11);
}