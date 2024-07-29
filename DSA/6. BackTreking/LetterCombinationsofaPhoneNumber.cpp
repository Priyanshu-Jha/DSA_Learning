#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <unordered_map>
using namespace std;

void solve(vector<string> &ans, int index, string output, string digit, vector<string> &mapping)
{
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }

    int digi = digit[index] - '0';
    string value = mapping[digi];
    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(ans, index + 1, output, digit, mapping);
        output.pop_back();
    }
}

vector<string> letterCombination(string n)
{
    vector<string> ans;
    if (n.length() == 0)
        return ans;
    int index = 0;
    string output = "";
    vector<string> mapping(10);
    mapping[2] = "abc";
    mapping[3] = "def";
    mapping[4] = "ghi";
    mapping[5] = "jkl";
    mapping[6] = "mno";
    mapping[7] = "prqs";
    mapping[8] = "tuv";
    mapping[9] = "wxyz";

    solve(ans, index, output, n, mapping);
    return ans;
}
int main()
{
    string n;
    cin >> n;
    vector<string> str = letterCombination(n);
    for (auto it : str)
        cout << it << " ";
}