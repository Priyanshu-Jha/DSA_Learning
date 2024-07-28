#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<unordered_map>
using namespace std;

void merge(vector<int>& arr, int l, int mid, int r){
    int left = mid-l+1;
    int right  = r - mid;
    vector<int> arr1;
    vector<int> arr2;

    for(int i = 0;i<left;i++)
        arr1.push_back(arr[l + i]);
    for(int i = 0;i<right;i++)
        arr2.push_back(arr[mid + 1 + i]);
    
    int i = 0,j = 0, index = l;
    while(i<left and j<right){
        if(arr1[i]<=arr2[j]){
            arr[index] = arr1[i++];
        }
        else
            arr[index] = arr2[j++];
        index++;
    }

    while(i<left)
        arr[index++] = arr1[i++];
    
    while(j<right)
        arr[index++] = arr2[j++];
    
}

void mergeSort(vector<int>& arr,int l,int r){
    if(l>=r)
        return;
    int mid = l + (r - l)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);

}
int main(){
    vector<int> arr{12,77,34,90,890,33,44,124};
    mergeSort(arr,0,arr.size()-1);
    for(auto it: arr)
        cout<<it<<" ";

}
