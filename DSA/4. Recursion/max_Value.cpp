#include<bits/stdc++.h>
#include <climits>
// #include<climit>
using namespace std;
int maxValue(int arr[],int i,int n,int minval){
    if(i == n)
        return minval;
    minval = max(minval,arr[i]);
    return maxValue(arr,i+1,n,minval);
}

int main(){
    int arr[] = {10,15,3,55,33,99,44};
    int n = sizeof(arr)/sizeof(int);
    int x = INT_MIN;
    cout<<maxValue(arr,0,n,x);
}