#include<iostream>
using namespace std;

void solve(string& str,int l,int r){
    if(l>=r)
        return;
    swap(str[l],str[r]);
    solve(str,l+1,r-1);
}

int main(){
    string str;
    cin>>str;

    solve(str,0,str.length()-1);
    cout<<str;
}