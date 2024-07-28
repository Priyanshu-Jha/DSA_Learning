#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,ans;
        cin>>a>>b>>c;
        if(a == b and b == c)
            ans = 0;
        else if(a == b)
            ans = abs(b-c);
        else if(b == c)
            ans = abs(b-a);
        else if(a == c)
            ans = abs(a-b);
        else{
            int maxval = max(a,max(b,c));
            int minval = min(a,min(b,c));
            int mid = (a+b+c)-minval-maxval;
            ans = abs(maxval-mid) + abs(mid-minval);
        }
        cout<<ans<<"\n";
    }
}