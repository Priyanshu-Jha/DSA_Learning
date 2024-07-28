#include<iostream>
#include<vector>
using namespace std;

 vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        // Tn = O(n)
        int low = 0,high = nums.size()-1;
        vector<int> ans;
        while(high-low>=k){
            if(abs(nums[low]-x)>abs(nums[high]-x))
                low++;
            else
                high--;
        }
        for(int i = low;i<=high;i++)
            ans.push_back(nums[i]);
        return ans;
    }
int main(){
    vector<int> arr = {1,2,3,4,5};
    vector<int> ans = findClosestElements(arr,4,-1);
    for(int i = 0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    

}