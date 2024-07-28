#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleSolution(vector<int> arr,int m,int mid){
    int sum = 0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i]-mid>0){
            sum += arr[i]-mid;
        }
        if(sum>=m)
            return true;
    }
    return false;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> length(n);
    for(int i = 0;i<n;i++){
    	cin>>length[i];
    }
    sort(length.begin(),length.end());

    int left = 0,right = length[n-1],ans = -1;
    while(left<=right){
        int mid = (left + right) >> 1;
        if(isPossibleSolution(length,m,mid)){
            ans = mid;
            left = mid+1;
            
        }
        else
            right = mid-1;
    }
    cout<<ans;
}