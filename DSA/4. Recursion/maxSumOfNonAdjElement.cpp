#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int> arr,int x,int n){
    if(x>=n)
        return 0;
    // if(i>n)
    //     return 0; 
    int maxi = 0;
    for(int i = x;i<n;i++){
        int ans1 = arr[i] + solve(arr,i+2,n);
        int ans2 = solve(arr,i+1,n);
        maxi = max(ans1,max(maxi,ans2));
    }
    return maxi;
}

int main(){
    vector<int> arr{1,2,3,1,3,5,8,1,9};

    int ans = solve(arr,0,arr.size());
    cout<<"ANS:"<<endl;
    cout<<ans<<endl;
}