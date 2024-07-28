#include<iostream>
using namespace std;

int bSearch(int arr[],int left,int right,int val){
    if(left>right)
        return -1;
    int mid = left + (right-left)/2;

    if(arr[mid] == val)
        return mid;
    if(arr[mid]>val)
        return bSearch(arr,left,mid-1,val);
    return bSearch(arr,mid+1,right,val);
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    int x ;
    cin>>x;
    int ans = bSearch(arr,0,n,x);
    if(ans == -1)
        cout<<"Not found";
    else
        cout<<"Found at: "<<ans;
}