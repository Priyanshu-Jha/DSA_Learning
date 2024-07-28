#include<iostream>
using namespace std;

int climb(int n,int arr[]){
    if(n == 1 or n == 2)
        return n;
    if(arr[n]!=0)
        return arr[n];
    return arr[n] = climb(n-1,arr) + climb(n-2,arr);
}

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i = 0;i<n+1;i++)
        arr[i] = 0;
    cout<<climb(n,arr);
}