#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<unordered_map>
using namespace std;

int partition(vector<int>&arr,int i,int j){
    int pivot = arr[j];
    int x = i-1;
    for(int a = i;a<j;a++){
        if(arr[a]<pivot){
            x++;
            swap(arr[a],arr[x]);
        }
    }
    x++;
    swap(arr[x],arr[j]);
    return x;
}

void quickSort(vector<int>&arr,int i,int j){
    if(i>=j)
            return;
    if(i<j){
        int pivot = partition(arr,i,j);
        quickSort(arr,i,pivot-1);
        quickSort(arr,pivot+1,j);
    }
}

int main(){
    vector<int>arr{4,14,9,20,13,22,27,9,3,1};
    quickSort(arr,0,arr.size()-1);
    for(int i = 0;i<arr.size();i++)
            cout<<arr[i]<<" ";

}
