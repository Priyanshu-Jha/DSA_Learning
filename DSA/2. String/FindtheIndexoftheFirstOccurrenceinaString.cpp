#include<iostream>
using namespace std;

int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        for(int i = 0;i<=n-m;i++){
            for(int j = 0;j<m;j++){
                if(needle[j]!=haystack[i+j])
                    break;
                if(j == m-1)
                    return i;
            }
        }

        // return haystack.find(needle);
        return -1;
}
int main(){
    string heystack,needle;
    cin>>heystack>>needle;
    cout<<strStr(heystack,needle);
}