#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, j, k) for (int i = j; i < k; i++)
#define RREP(i, j, k) for (int i = j; i >= k; i--)
#define show_array(a)  \
  for (auto i : a)     \
  {                    \
    cout << i << endl; \
  }
#define INF 100100100100
#define PII pair<int, int>
#define Graph vector<vector<int>>
#define chmin(a, b) a = min(a, b)
#define chmax(a, b) a = max(a, b)

int main()
{
  string s, t;
  cin >> s >> t;
  vector<vector<int>> dp(3005, vector<int>(3005, 0));
  REP(i, 1, s.size() + 1)
  {
    REP(j, 1, t.size() + 1)
    {
      if (s[i - 1] == t[j - 1])
        dp[i][j] = dp[i - 1][j - 1] + 1;
      else
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    }
  }
  int len = dp[s.size()][t.size()];
  int i = s.size();
  int j = t.size();
  vector<char> ans(len);
  while (len > 0)
  {
    if (s[i - 1] == t[j - 1])
    {
      ans[--len] = s[i - 1];
      i--;
      j--;
    }
    else if (dp[i][j] == dp[i - 1][j])
    {
      i--;
    }
    else
    {
      j--;
    }
  }
  for (auto c : ans)
  {
    cout << c;
  }
  cout << endl;
  return 0;
}