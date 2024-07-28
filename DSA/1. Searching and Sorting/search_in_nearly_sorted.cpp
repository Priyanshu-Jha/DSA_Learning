#include<iostream>
#include<vector>
using namespace std;

//O(T(n) = O(logn) T(n) = O(1)
int searchInNearlySorted(vector<int> arr,int left,int right,int target){
    // int ans = -1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid] == target)
            return mid;
        if(mid-1>=0  and arr[mid-1] == target)
            return mid-1;
        if(mid+1<=arr.size()-1 and arr[mid+1] == target)
            return mid+1;
        
        if(arr[mid]>target)
            right = mid-2;
        else
            left = mid+2;
    }
    return -1;
}

int main(){
    vector<int> arr = {10,3,40,20,50,40,70};
    int target = 1;
    cout<<searchInNearlySorted(arr,0,arr.size()-1,target);
}