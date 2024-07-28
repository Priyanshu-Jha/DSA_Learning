#include<bits/stdc++.h>
using namespace std;

 int myAtoi(string s) {
        long long ans = 0,i = 0;
        int sign = 1;
        while(s[i] == ' ')
            i++;

        if(i<s.length() and (s[i] == '-' or s[i] == '+')){
            sign = s[i] == '-'? -1 : 1;
            i++;
        } 
        while(i<s.length() and isdigit(s[i])){
            // cout<<s[i]<<endl;
            ans = ans*10 + (s[i] - '0');
            i++;
            if(ans>INT_MAX)
                break;
        }   
        ans = (long long)ans*sign;
        if(ans<INT_MIN)
            ans = INT_MIN;
        if(ans>INT_MAX)
            ans = INT_MAX;
        return ans;
    }
int main(){
    string str;
    cin>>str;
    cout<<myAtoi(str);

}