#include<iostream>
#include<vector>
using namespace std;


//T(n) = O(log(nm)), S(n) = O(1)
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0;
        int row = matrix.size();
        int col = matrix[0].size();
        int right = row*col - 1;
        while(left<=right){
            int mid = left + (right - left)/2;
            int midValue = matrix[mid/col][mid%col];
            if(midValue == target)
                return true;
            else if(midValue < target)
                left = mid+1;
            else
                right = mid-1;
        }
        return false;
}

int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 33;
    cout<<searchMatrix(matrix,target);
}
