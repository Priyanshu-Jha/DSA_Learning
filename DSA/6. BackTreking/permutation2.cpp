#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(vector<int> arr, vector<vector<int>> &ans, int i)
{
    if (i >= arr.size())
    {
        ans.push_back(arr);
        return;
    }

    for (int j = i; j < arr.size(); j++)
    {
        if (i == j or arr[i] != arr[j])// ensures that duplicate elements are not swapped repeatedly, reducing the repetition of generated permutations.
        { 
            swap(arr[i], arr[j]);
            solve(arr, ans, i + 1);
            // swap(arr[i],arr[j]);         //  to decrease repetition of generation of permutation
        }
    }
}
int main()
{
    vector<int> arr{2, 2, 1, 1};
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    solve(arr, ans, 0);
    for (auto it : ans)
    {
        for (auto x : it)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}