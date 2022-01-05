#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, j, k) for (int i = j; i < k; i++)
#define rrep(i, j, k) for (int i = j; i >= k; i--)
#define p(s) cout << s << endl
#define show_array(a) \
  for (auto i : a) p(i)
#define INF 1001001001
#define PII pair<int, int>
#define Graph vector<vector<int>>
#define chmin(a, b) a = min(a, b)
#define chmax(a, b) a = max(a, b)

vector<string> split(string s, string c) {
  int offset = 0;
  vector<string> res;
  auto pos = s.find(c, offset);
  while (pos != string::npos) {
    res.push_back(s.substr(offset, pos - offset));
    offset = pos + c.length();
    pos = s.find(c, offset);
  }
  res.push_back(s.substr(offset));
  return res;
}

int main() {
  string s;
  cin >> s;
  auto n = split(s, ".");
  int x = stoi(n[0]), y = stoi(n[1]);

  if (y <= 2)
    p(x << "-");
  else if (y <= 6)
    p(x);
  else
    p(x << "+");

  return 0;
}