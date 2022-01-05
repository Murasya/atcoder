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
  int N, W;
  cin >> N >> W;
  vector<int> w(N), v(N);
  REP(i, 0, N)
  {
    cin >> w[i] >> v[i];
  }
  // 品物iこめまでで価値jになる最小の重さ
  vector<vector<ll>> dp(N + 1, vector<ll>(100010, INF));
  dp[0][0] = 0;
  REP(i, 1, N + 1)
  {
    REP(j, 0, 100005)
    {
      if (j - v[i - 1] >= 0)
        dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - v[i - 1]] + w[i - 1]);
      else
        dp[i][j] = dp[i - 1][j];
    }
  }
  int ans = 100000;
  while (dp[N][ans] > W)
    ans--;
  cout << ans << endl;
  return 0;
}