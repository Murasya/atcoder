#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, j, k) for (int i = j; i < k; i++)
#define RREP(i, j, k) for (int i = j; i >= k; i--)
#define show_array(a)  \
  for (auto i : a) {   \
    cout << i << endl; \
  }
#define INF 100100100100
#define PII pair<int, int>
#define Graph vector<vector<int>>
#define chmin(a, b) a = min(a, b)
#define chmax(a, b) a = max(a, b)

int main() {
  int n;
  cin >> n;
  vector<double> p(n);
  REP(i, 0, n) cin >> p[i];
  // i枚目まで投げた時, 表がj枚出る確率
  vector<vector<double>> dp(n + 1, vector<double>(n + 1));
  dp[0][0] = 1;
  REP(i, 1, n + 1) {
    REP(j, 0, i + 1) {
      if (j - 1 >= 0)
        dp[i][j] = dp[i - 1][j] * (1 - p[i - 1]) + dp[i - 1][j - 1] * p[i - 1];
      else
        dp[i][j] = dp[i - 1][j] * (1 - p[i - 1]);
    }
  }
  double ans = 0;
  REP(i, n / 2 + 1, n + 1) ans += dp[n][i];
  printf("%.10f\n", ans);
  return 0;
}