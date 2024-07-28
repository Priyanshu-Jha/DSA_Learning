#include<iostream>
#include<algorithm>
using namespace std;

void addString(string &s1,int l1,string &s2,int l2,int carry,string &ans){
    if(l1 <0 and l2<0){
        if(carry!=0)
            ans.push_back(carry);
        return;
    }

    int n1 = (l1>=0 ? s1[l1] : '0') - '0';
    int n2 = (l2>=0 ? s2[l2] : '0') - '0';
    int csum = n1 + n2 + carry;
    int digit = csum%10;
    carry = csum/ 10;
    ans.push_back(digit + '0');

    addString(s1,l1-1,s2,l2-1,carry,ans);
}

int main(){
    string s1,s2,ans = "";
    cin>>s1>>s2;
    addString(s1,s1.length()-1,s2,s2.length()-1,0,ans);
    reverse(ans.begin(),ans.end());
    cout<<ans;
}