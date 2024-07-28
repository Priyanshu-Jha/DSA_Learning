#include<iostream>
#include<string>
using namespace std;

int expend(string str,int i,int j){
        int count = 0;
        while(i>=0 and j<str.length() and str[i] == str[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }

    

    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();

        for(int i = 0;i<n;i++){
            int odd = expend(s,i,i);
            count +=odd;

            int even = expend(s,i,i+1);
            count+=even;
        }
        return count;
    }

int main(){
    string str;
    cin>>str;
    cout<<countSubstrings(str);
}