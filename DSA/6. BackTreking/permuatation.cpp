#include <iostream>
#include <vector>
using namespace std;
void solve(string& str, vector<string> &ans, int i)
{
    if (i >= str.length())
    {
        ans.push_back(str);
        cout << str << endl;
        return;
    }
    // return;
    for (int j = i; j < str.length(); j++)
    {
        swap(str[i], str[j]);
        solve(str, ans, i + 1);
        swap(str[i], str[j]);
    }
}

int main()
{
    string str;
    cin >> str;
    vector<string> ans;
    solve(str, ans, 0);
    // for(auto it: ans)
    //     cout<<it<<" ";
}