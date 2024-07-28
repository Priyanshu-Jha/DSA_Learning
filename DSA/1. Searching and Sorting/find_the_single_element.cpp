#include<iostream>
#include<vector>
using namespace std;

int searchSingleElement(vector<int> arr){
    int left = 0,right = arr.size()-1;
    while(left<=right){
        int mid = left + (right - left)/2;

        if(left == right)
            return left;
        if(mid%2 == 0){
            if(arr[mid] == arr[mid+1])
                left = mid+2;
            else    
                right = mid;
        }
        else{
            if(arr[mid] != arr[mid+1])
                left = mid+1;
            else
                right = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1,2,2,3,3,4,4,3,3,6,6,7,7};
    int index = searchSingleElement(arr);
    cout<<"Index is "<<index<<" \n"<<arr[index];
}