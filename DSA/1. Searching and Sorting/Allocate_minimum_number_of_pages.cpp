#include<iostream>
#include<numeric>
using namespace std;

bool isPossibleSolution(int arr[],int n,int m,int mid){
    int pagesum = 0,count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]>mid)
            return false;
        if(arr[i] + pagesum > mid){
            count++;
            pagesum = arr[i];
            if(count >= m)
                return false;
        }
        else    
            pagesum += arr[i];
    }
    return true;
}

int findPages(int arr[],int n,int m){
    if(m>n)
        return -1;
    int left = 0,right = accumulate(arr,arr+n,0),ans = 0;
    while(left<=right){
        int mid = (left + right) >>1;
        if(isPossibleSolution(arr,n,m,mid)){
            ans = mid;
            right = mid-1;
        }
        else    
            left = mid+1;
    }
    return ans;
}


int main(){
    int arr[] = {15,17,20};
    int n = 3,m = 2;
    cout<<findPages(arr,n,m);
}