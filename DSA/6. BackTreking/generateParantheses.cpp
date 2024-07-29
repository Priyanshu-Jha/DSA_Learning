#include <iostream>
#include <vector>
using namespace std;
void solve(int l, int r, int n, vector<string> &ans, string temp) {
  if (l == 0 and r == 0) {
    ans.push_back(temp);
    return;
  }

  if (l > 0) {
    temp.push_back('(');
    solve(l - 1, r, n, ans, temp);
    temp.pop_back();
  }

  if (l < r) {
    temp.push_back(')');
    solve(l, r - 1, n, ans, temp);
    temp.pop_back();
  }
}

vector<string> generatePara(int n) {
  int l = n, r = n;
  vector<string> ans;
  string str = "";
  solve(l, r, n, ans, str);
  return ans;
}

int main() {
  int n = 3;
  vector<string> ans;
  ans = generatePara(n);
//   cout << "Checking";
  for (auto it : ans)
    cout << it << endl;
  return 0;
}