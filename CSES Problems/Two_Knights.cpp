#include<iostream>
using namespace std;

long knightCanPlaced(int n){
    long totalWays = (long)(n*n);
    totalWays = totalWays*(totalWays-1)/2;

    long attackWays = 4*(n-1)*(n-2);

    return totalWays - attackWays;
}

int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        cout<<knightCanPlaced(i)<<endl;
    }
}