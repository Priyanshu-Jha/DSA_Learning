#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> arr,int i,int j){
    if(j >= arr.size()){
        i = i+1;
        j = i;
    }
    if(i >= arr.size())
        return;
    for(int x = i;x<=j;x++)
        cout<<arr[x]<<" ";
    cout<<endl;
    // cout<<i<<" "<<j<<endl;
    solve(arr,i,j+1);
}

int main(){
    vector<int> arr{1,2,3,4,5,6};
    solve(arr,0,0);
}