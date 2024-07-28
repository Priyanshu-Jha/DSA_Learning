#include<iostream>
#include<vector>
using namespace std;

void printSubSequence(string str,int i,string ans){
    if(i == str.length()){
        cout<<ans<<endl;
        return;
    }        
    printSubSequence(str,i+1,ans+str[i]);
    printSubSequence(str,i+1,ans);   

}

int main(){
    string str,ans = "";
    cin>>str;
    printSubSequence(str,0,ans);
}