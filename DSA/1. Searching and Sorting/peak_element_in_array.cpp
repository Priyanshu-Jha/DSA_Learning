#include<iostream>
#include<vector>
using namespace std;

int peakElement(vector<int> arr){
    int left= 0,right = arr.size()-1,ans= -1;;
    while(left<=right){
        int mid = left + (right - left)/2;
        if(arr[mid]<arr[mid+1])
            left = mid+1;
        else{
            ans = arr[mid];
            right = mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,4,2};
    cout<<peakElement(arr);

}