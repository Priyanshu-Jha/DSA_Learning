#include<bits/stdc++.h>
using namespace std;

bool cmp(char first,char second){
    return first > second;
}

int main(){
    string str;
    cin>>str;
    cout<<"Before sort: "<<str<<endl;
    sort(str.begin(),str.end(),cmp);
    cout<<"After Sort: "<<str;

}