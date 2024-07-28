#include<bits/stdc++.h>
using namespace std;

int findMinDifference(vector<string>& timePoints) {
        vector<int>mins;
        for(int i = 0;i<timePoints.size();i++){
            string str = timePoints[i];
            int hour = stoi(str.substr(0,2));
            int min = stoi(str.substr(3,2));

            mins.push_back(hour*60 + min);
        }
        sort(mins.begin(),mins.end());
        int ans = INT_MAX;
        for(int i = 0;i<mins.size()-1;i++){
            if(ans>mins[i+1]-mins[i])
                ans=mins[i+1]-mins[i]; 
        }

        // IMP code
        int lastdiff = mins[0] + 1440 - mins[mins.size()-1];
        ans = min(ans,lastdiff);
        return ans;
}

int main(){
    vector<string> vec = {"23:59","00:00"};
    cout<<findMinDifference(vec);
}