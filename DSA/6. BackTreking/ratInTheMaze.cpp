#include <iostream>
#include <vector>
using namespace std;
bool isValid(int x, int y, vector<vector<int>> &arr, vector<vector<bool>> &isVisited)
{
    if (((x >= 0 and x < arr.size()) and (y < arr[0].size() and y >= 0)) and arr[x][y] == 1 and isVisited[x][y] == false)
        return true;
    return false;
}

void solve(vector<vector<int>> &arr, int x, int y, vector<vector<bool>> &visited, vector<string> &result, string output)
{
    if (x == arr.size() - 1 and y == arr[0].size() - 1)
    {
        result.push_back(output);
        return;
    }
    int xval[] = {1, 0, 0, -1};
    int yval[] = {0, -1, 1, 0};
    char val[] = {'D', 'L', 'R', 'U'};
    for (int i = 0; i < 4; i++)
    {
        int xnew = x + xval[i];
        int ynew = y + yval[i];
        char newval = val[i];
        if (isValid(xnew, ynew, arr, visited))
        {
            visited[xnew][ynew] = true;
            solve(arr, xnew, ynew, visited, result, output + newval);
            visited[xnew][ynew] = false;
        }
    }
    // //Down
    // if(isValid(x+1,y,arr,visited)){
    //     visited[x+1][y] = true;
    //     solve(arr,x+1,y,visited,result,output+"D");
    //     visited[x+1][y] = false;
    // }
    //     //Left
    // if(isValid(x,y-1,arr,visited)){
    //     visited[x][y-1] = true;
    //     solve(arr,x,y-1,visited,result,output+"L");
    //     visited[x][y-1] = false;
    // }
    // //right
    // if(isValid(x,y+1,arr,visited)){
    //     visited[x][y+1] = true;
    //     solve(arr,x,y+1,visited,result,output+"R");
    //     visited[x][y+1] = false;
    // }

    // //Up
    // if(isValid(x-1,y,arr,visited)){
    //     visited[x-1][y] = true;
    //     solve(arr,x-1,y,visited,result,output+"U");
    //     visited[x-1][y] = false;
    // }
}
int main()
{
    vector<vector<int>> arr{{1, 1, 1},
                            {1, 1, 1},
                            {1, 0, 1}};
    vector<vector<bool>> visited(arr.size(), vector<bool>(arr[0].size(), false));
    vector<string> result;
    string output;
    visited[0][0] = true;
    if (arr[0][0] == 0)
    {
        cout << "Path is not exist";
        return 0;
    }

    solve(arr, 0, 0, visited, result, output);
    for (auto it : result)
        cout << it << "\n";
    if (result.size() == 0)
        cout << "Path is not exist";
}