#include<iostream>
using namespace std;

long long factorial(long long n){
    if(n<2)
        return 1;
    return n*factorial(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
}