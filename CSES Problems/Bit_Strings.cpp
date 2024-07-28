#include<iostream>
#include<vector>
#define MOD 1000000007 ; 
using namespace std;

long calculatePower(long two,long power){
    if(power < 0)
        return 1;
    if(power == 1)
        return two;
    long half = calculatePower(two,power/2);
    half %= MOD;
    long full = (half%MOD)*(half%MOD);
    if(power%2 == 1)
        full = ((full%MOD)*(two%MOD))%MOD;
    return full;
}

int main(){
    int n;
    cin>>n;
    cout<<calculatePower(2,n);

}