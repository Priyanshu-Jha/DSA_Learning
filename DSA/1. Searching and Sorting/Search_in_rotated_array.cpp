#include<iostream>
#include<vector>
using namespace std;


//T(n) = O(logn), S(n) = O(1);
int rotatedbSearch(vector<int> arr, int left,int right,int target){
    int ans = -1;
    while(left<=right){
        int mid = left + (right-left)/2;

        if(arr[mid] == target){
            ans = mid;
            break;
        }
        else if(arr[left]<=arr[mid]){   //left Sorted
            if(target>=arr[left] and target<arr[mid])
                right = mid-1;
            else
                left = mid+1;
        }
        else{
            if(target>arr[mid] and target<=arr[right])
                left = mid+1;
            else
                right = mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    int target = 7;
    cout<<rotatedbSearch(arr,0,arr.size()-1,target);
}