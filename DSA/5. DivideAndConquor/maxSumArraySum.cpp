#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxSum(vector<int> arr){
    int maxsum = INT_MIN,temp = 0;
    for(int i = 0;i<arr.size();i++){
        temp = 0;
        for(int j = i;j<arr.size();j++){
            temp += arr[j];
            maxsum  = max(maxsum,temp);
        }
    }
    return maxsum;
}

int main(){
    vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSum(arr);

}