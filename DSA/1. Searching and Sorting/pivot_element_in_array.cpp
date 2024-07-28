#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int pivotElement(vector<int> arr){
    int left = 0,right = arr.size()-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(left == right)
            return arr[mid];
        if(mid+1<=right and arr[mid]>arr[mid+1])
            return arr[mid];
        if(mid-1>=left and arr[mid]<arr[mid-1])
            return arr[mid-1];
        if(arr[left]>arr[mid])
            right = mid-1;
        else    
            left = mid+1;
        
    }
    return -1;
}

int main(){
    vector<int> arr = {9,11,12,1,2,3,4,5,6,7};
    cout<<pivotElement(arr);
}