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
#define chmax(a, b) a = max(a, b)

int main()
{
  int N, W;
  cin >> N >> W;
  vector<int> w(N), v(N);
  REP(i, 0, N)
  {
    cin >> w[i] >> v[i];
  }
  // 品物iこで重さw以下の価値最大
  vector<vector<ll>> dp(N + 5, vector<ll>(W + 5, 0));

  REP(i, 1, N + 1)
  {
    REP(j, 1, W + 1)
    {
      if (j >= w[i - 1])
      {
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
      }
      else
      {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  cout << dp[N][W] << endl;
  return 0;
}