#include<iostream>
using namespace std;

int sqrtUsingBs(int num){
    int ans = 0;
    int left = 1,right = num;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(mid <= num/mid){
            ans = mid;
            left=  mid+1;
        }
        else
            right = mid-1;
    }
    return ans;
}

int main(){
    int num = 1;
    cout<<"sqrt of num is "<<sqrtUsingBs(num);
}