#include<bits/stdc++.h>
using namespace std;

string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        int direction = 1; //top-> bottom
        int row = 0,index = 0;
        vector<string> vec(numRows);
        string str;
        while(true){
            if(direction){
                while(row<numRows and index<s.length()){
                    vec[row++].push_back(s[index++]);
                }
                direction = 0;
                row = row - 2;
            }
            else{
                while(row>=0 and index<s.length()){
                    vec[row--].push_back(s[index++]);
                }
                direction = 1;
                row = row + 2;
            }
                    if(index>=s.length())
            break;
        }
        for(auto it:vec)
                str+=it;

        return str;
}

int main(){
    string s;
    int nR;
    cin>>s>>nR;
    cout<<convert(s,nR);
    
}