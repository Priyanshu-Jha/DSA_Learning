#include<iostream>
using namespace std;

bool checkSortOrNot(int arr[],int i,int n){
    if(i == n-1)
        return true;
    if(arr[i]>arr[i+1])
        return false;
    return checkSortOrNot(arr, i+1,n);
}

int main(){
    // int arr[] = {2,45,66,33,11,444};
    int arr[] = {1,1,1};
    int n = sizeof(arr)/sizeof(int);

    cout<<checkSortOrNot(arr,0,n);
}