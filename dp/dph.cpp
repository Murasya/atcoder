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
  int h, w;
  int mod = 1e9 + 7;
  cin >> h >> w;
  vector<string> a(h);
  REP(i, 0, h) cin >> a[i];
  vector<vector<int>> dp(h + 1, vector<int>(w + 1, 0));
  dp[1][1] = 1;
  REP(i, 1, h + 1) {
    REP(j, 1, w + 1) {
      if (a[i - 1][j - 1] == '.') {
        dp[i][j] += (dp[i - 1][j] + dp[i][j - 1]) % mod;
      }
    }
  }
  cout << dp[h][w] << endl;
  return 0;
}