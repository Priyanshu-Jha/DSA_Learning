#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int modifyMEX(int n, vector<int> &arr) {       
    int i = 0;
    unordered_map<int,int> mp;
    sort(arr.begin(),arr.end());
        
    unordered_set<int> present(arr.begin(), arr.end());        
    int originalMex = 0;
    while (present.count(originalMex)) {
        originalMex++;
    }
        // set<int> st;
    if(arr[0]!=0)
        return -1;
        // for(auto i:arr)
        //     st.insert(i);
        // // find MEX
        // for(auto &x:st){
        //     if(i != x){
        //         break;
        //     }
        //     i++;
        // }
        // insert in map
    int ans = INT_MAX;
    for(int x:arr)
        if(x<originalMex)
            mp[x]++;
    int min = 0;
        //find mp.second min value
    for(auto x:mp){
        if(x.second<ans)
            ans = x.second;
    }
    return ans;
}