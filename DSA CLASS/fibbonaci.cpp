#include<iostream>
#include <time.h> 
using namespace std;

// int fib(int n){
//     if(n == 0 or n == 1)
//         return n;
//     return fib(n-1) + fib(n-2);
// }
int fib(int n){
    // int prev = 1,next = 2,ans = ;
    while(n--){

    }
}

int main(){
    clock_t  start, end;
    int n = 41;
    // cin>>n;
    start = clock(); 
    cout<<fib(n)<<endl;
    end = clock(); 
    double dblTime = ((double)(end - start)) / CLOCKS_PER_SEC;
    cout<<dblTime;
}