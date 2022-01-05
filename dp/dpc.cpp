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
#define INF 1000000000
#define PII pair<int, int>
#define Graph vector<vector<int>>

int main()
{
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n);
  REP(i, 0, n)
  {
    cin >> a[i] >> b[i] >> c[i];
  }
  vector<vector<int>> dp(n + 3, vector<int>(3));
  dp[0][0] = 0;
  dp[0][1] = 0;
  dp[0][2] = 0;
  REP(i, 1, n + 1)
  {
    dp[i][0] = max(dp[i - 1][1] + b[i - 1], dp[i - 1][2] + c[i - 1]);
    dp[i][1] = max(dp[i - 1][0] + a[i - 1], dp[i - 1][2] + c[i - 1]);
    dp[i][2] = max(dp[i - 1][1] + b[i - 1], dp[i - 1][0] + a[i - 1]);
  }
  int ans = max(dp[n][0], max(dp[n][1], dp[n][2]));
  cout << ans << endl;
  return 0;
}