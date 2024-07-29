#include <iostream>
#include <vector>
using namespace std;

void printsol(vector<vector<char>> &board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
    cout << endl
         << endl;
}

bool isSafe(int row, int col, vector<vector<char>> &board, int n)
{
    int i = row;
    int j = col;

    // upper left diagonal
    while (i >= 0 and j >= 0)
    {
        if (board[i][j] == 'Q')
            return false;
        i--;
        j--;
    }
    i = row;
    j = col;

    // row
    while (j >= 0)
    {
        if (board[i][j] == 'Q')
            return false;
        j--;
    }
    i = row;
    j = col;

    // lower left diagonal
    while (i < n and j >= 0)
    {
        if (board[i][j] == 'Q')
            return false;
        i++;
        j--;
    }
    return true;
}

void solve(vector<vector<char>> &board, int col, int n)
{
    if (col >= n)
    {
        printsol(board, n);
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            board[row][col] = 'Q';
            solve(board, col + 1, n);
            board[row][col] = '-';
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<char>> board(n, vector<char>(n, '-'));

    solve(board, 0, n);
}