#include<iostream>
#include<vector>
using namespace std;
void mergeSort(vector<int>&arr1,vector<int>&arr2){
    int n = arr1.size(),m = arr2.size();
    int total_size = n + m;
    int gap = total_size/2 + total_size%2;
    while(gap>0){
        cout<<" Gap: "<<gap<<endl;
        int i = 0,j = gap;
        while(j<total_size){

            //i and j on first array
            if(j<n and arr1[i]>arr1[j])
                swap(arr1[i],arr1[j]);
            
            // i is on first and j is on second
            else if(i<n and j>=n and arr1[i]> arr2[j-n])
                swap(arr1[i],arr2[j-n]);
            
            //if both is on second array
            else if(i>=n and arr2[i-n]>arr2[j-n])
                swap(arr2[i-n],arr2[j-n]);
            i++;
            j++;
        }            
        gap = gap<=1 ? 0 : gap/2 + gap%2;
    } 
}

int main(){
    vector<int> arr1{2,15,17,91,111},arr2{4,7,10,14};
    mergeSort(arr1,arr2);
    for(auto it:arr1)
        cout<<it<<" ";
    for(int i = 0;i<arr2.size();i++)
        cout<<arr2[i]<<" ";
    return 0;
}