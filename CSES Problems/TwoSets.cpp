#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int> firstarr, secondarr;
    cin>>n;
    long sum = (long)n*(n+1)/2;
    if(sum%2 == 1)
        cout<<"NO\n";
    else{
        cout<<"YES\n";
        long half = sum/2;
        while(n){
            if(half-n>=0){
                half -= n;
                firstarr.push_back(n);
            }
            else{
                secondarr.push_back(n);
            }
            n--;
        }
        cout<<firstarr.size()<<"\n";
        for(int i = 0;i<firstarr.size();i++)
            cout<<firstarr[i]<<" ";
        cout<<"\n"<<secondarr.size()<<"\n";
        for(int i = 0;i<secondarr.size();i++)
            cout<<secondarr[i]<<" ";

    }
    
}