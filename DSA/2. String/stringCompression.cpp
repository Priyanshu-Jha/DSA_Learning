#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
        int count = 1;
        string str;
        str.push_back(chars[0]);
        for(int i = 1;i<chars.size();i++){
            if(chars[i-1] == chars[i])
                count++;
            else{
                if(count>1){
                    string x = to_string(count);
                    str+=(x);
                }
                count = 1;
                str.push_back(chars[i]);
            }
        }
        string x = to_string(count);
        if(count>1)
            str+=(x);
        // cout<<str;
        for(int i = 0;i<str.length();i++)
            chars[i] = str[i];
        return str.length();        
    }

int main(){
    vector<char> str{'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    int len = compress(str);
    for(int i = 0;i<len;i++)
        cout<<str[i]<<" ";

}