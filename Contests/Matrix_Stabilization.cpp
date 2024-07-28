#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        int i = 0,j = 0;
        while(i<n and j<m){
            if(i == 0 and j == 0){
                int temp = max(arr[i+1][j], arr[i][j+1]);
                if(arr[i][j]>temp)
                    arr[i][j] = temp;
            }
            else if(i == 0){
                int temp = max(arr[i][j-1],max(arr[i][j+1],arr[i+1][j+1]));
                if(arr[i][j]>temp)
                    arr[i][j] = temp;
            }
            else if(j == 0){
                int temp = max(arr[i-1][j],max(arr[i+1][j],arr[i][j+1]));
                if(arr[i][j]>temp)
                    arr[i][j] = temp;
            }
            else if(i == n-1 and j == m-1){
                int temp = max(arr[i][j-1], arr[i-1][j]);
                if(arr[i][j]>temp)
                    arr[i][j] = temp;
            }
            else if(i == n-1){
                int temp = max(arr[i][j-1],max(arr[i][j+1],arr[i+1][j+1]));
                if(arr[i][j]>temp)
                    arr[i][j] = temp;
            }
        }
    }
}