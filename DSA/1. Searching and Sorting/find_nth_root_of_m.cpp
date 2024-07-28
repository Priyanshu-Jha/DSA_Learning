#include<iostream>
using namespace std;

	long long check(long i,long n){
	    long long ans = 1;
	    while(n--)
	        ans *= i;
	   if(ans<1)
	    return -1;
	   return ans;
	}
	
	int NthRoot(long n, long  m){
	    long left = 1,right = m;
	    while(left<=right){
	        long mid = left + (right - left)/2;
	        long long temp = check(mid,n);
	        if(temp == -1)
	        {
	           right = mid-1;
	           continue;
	        }
	            
	        if(temp == m){
	            return mid;
	        }
	        else if(temp >m){
	            right = mid-1;
	        }
	        else{
	           left = mid+1;
	        }
	            
	    }
	    return -1;
	}

int main(){
    int n = 3,m = 27;
    cout<<NthRoot(3,27);
    

}