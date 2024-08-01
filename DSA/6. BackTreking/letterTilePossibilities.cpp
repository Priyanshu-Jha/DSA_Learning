#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<unordered_map>
#include<set>
using namespace std;

void solve(string str,set<string>&st,int i,string temp){
    if(i >= str.length()){
        st.insert(temp);
        return;

    }
        
    cout<<temp<<endl;
    for(int j = 0;i<str.length();j++){
        swap(str[i],str[j]);
        temp.push_back(str[j]);
        
        st.insert(temp);
        solve(str,st,i+1,temp);
        swap(str[i],str[j]);
        temp.pop_back();
    }
}

int main(){
    string str;
    cin>>str;
    set<string> st;
    string temp = "";
    solve(str,st,0,temp);
    cout<<st.size();
}
