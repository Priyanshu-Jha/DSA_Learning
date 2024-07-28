#include<iostream>
#include<string>

using namespace std;

 string removeDuplicates(string s) {
        string ans;
        ans = s[0];
        for(int i = 1;i<s.length();i++){
            ans += s[i];
            if(ans.length()>1){
                // cout<<ans<<" ";
                if(ans[ans.length()-2]  == ans[ans.length()-1]){
                    ans.pop_back();
                    ans.pop_back();
                }
            }
        }
        return ans;
    }

int main(){
    string str;
    cin>>str;
    cout<<"After removing duplicate: "<<removeDuplicates(str);
    
}