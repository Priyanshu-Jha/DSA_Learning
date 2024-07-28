#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int> arr,int target){
    int left = 0,right = arr.size()-1,ans = -1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(arr[mid]>=target){
            ans = mid;
            right = mid-1;
        }
        else
            left = mid+1;
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,4,4,4,4,5,6,7,10};
    cout<<lowerBound(arr,4);
}