#include <bits/stdc++.h>

#include <atcoder/modint>
using namespace std;
using namespace atcoder;
using mint = modint998244353;
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
  int n, m, k;
  cin >> n >> m >> k;
  Graph g(n, vector<int>(n, 1));
  REP(i, 0, n) { g[i][i] = 0; }
  REP(i, 0, m) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    g[u][v] = 0;
    g[v][u] = 0;
  }
  // i日めに都市jにいる場合のかず
  vector<vector<mint>> dp(k + 1, vector<mint>(n + 1));
  queue<int> q_pre;
  dp[0][0] = 1;
  q_pre.push(0);
  REP(i, 1, k + 1) {
    queue<int> q;
    while (!q_pre.empty()) {
      int j = q_pre.front();
      q_pre.pop();
      REP(u, 0, n) {
        if (g[j][u]) {
          q.push(u);
          dp[i][u] += dp[i - 1][j];
        }
      }
    }
    q_pre = q;
  }
  cout << dp[k][0].val() << endl;
  return 0;
}