#include<iostream>
#include<vector>
using namespace std;

 long long merge(vector<int> arr,int low,int mid,int high){
        vector<int> temp;
        int left = low,right = mid+1;
        long long ans = 0;
        
        while(left<=mid and right<=high){
            if(arr[left]<= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
            if((arr[left]+arr[right]%24 == 0))
                ans = mid;             
        }
     while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return ans;      
        
    }
    long long mergeSort(vector<int> &arr, int low, int high) {
   long long cnt = 0;
    if (low >= high) return cnt;
    long long mid = (low + high) / 2 ; 
    cnt += mergeSort(arr, low, mid);  // left half
    cnt += mergeSort(arr, mid + 1, high); // right half
    cnt += merge(arr, low, mid, high);  // merging sorted halves
    return cnt;
}
    
    long long countCompleteDayPairs(vector<int>& hours) {
//         map<int,int> mp;
//         sort(hours.begin(),hours.end());
//         for(int i = 0;i<hours.size();i++){
//             mp[hours[i]] = i;
//         }
        
//         int ans = 0;
//         for(int i = 0;i<hours.size();i++){
//             int check = 
//         }
        return mergeSort(hours,0,hours.size()-1);
    }
int main(){
    vector<int> arr = {12,12,30,24,24};
    cout<<countCompleteDayPairs(arr);
}