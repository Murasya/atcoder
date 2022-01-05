#include <bits/stdc++.h>

#include <atcoder/dsu>
using namespace std;
using namespace atcoder;
#define ll long long
#define REP(i, j, k) for (int i = j; i < k; i++)
#define RREP(i, j, k) for (int i = j; i >= k; i--)
#define show_array(a)  \
  for (auto i : a) {   \
    cout << i << endl; \
  }
#define INF 1001001001
#define PII pair<int, int>
#define Graph vector<vector<PII>>
#define chmin(a, b) a = min(a, b)
#define chmax(a, b) a = max(a, b)

int main() {
  int n;
  cin >> n;
  vector<pair<int, pair<int, int>>> t;
  REP(i, 0, n - 1) {
    int u, v, w;
    cin >> u >> v >> w;
    t.push_back({w, {--u, --v}});
  }
  sort(t.begin(), t.end());
  dsu dsu(n);
  ll sum = 0;

  REP(i, 0, n - 1) {
    int u = t[i].second.first;
    int v = t[i].second.second;
    ll w = t[i].first;
    sum += w * dsu.size(u) * dsu.size(v);
    dsu.merge(u, v);
  }
  cout << sum << endl;
  return 0;
}