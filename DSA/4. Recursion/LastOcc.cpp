#include<iostream>
using namespace std;

int solve(string str,int i,int ans,char target){
    if(i == str.length())
        return ans;
    if(str[i] == target)
        ans = i;
    return solve(str,i+1, ans,target);
}

int main(){
    string str;
    cin>>str;
    char ch;
    cin>>ch;

    cout<<solve(str,0,-1,ch);    
}