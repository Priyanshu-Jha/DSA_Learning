#include<iostream>
#include<vector>
using namespace std;

int minSwaps(vector<int>& nums) {
        int totalone = 0,n = nums.size();
        for(auto it:nums)
        totalone += it;
        int windowone = 0;
        for(int i =0;i<totalone;i++)
            windowone += nums[i];
        int maxone = windowone;
        int j = 0;
        for(int i = totalone;i<nums.size() + totalone;i++){
            windowone += nums[i%n] - nums[j%n];
            maxone = max(maxone,windowone);
            j++;
        }
        return totalone-maxone;
    }

int main(){
    vector<int> arr{0,1,0,1,1,0,0};
    cout<<minSwaps(arr);
}