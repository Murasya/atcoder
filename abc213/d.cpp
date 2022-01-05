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
#define Graph vector<set<int>>
#define chmin(a, b) a = min(a, b)
#define chmax(a, b) a = max(a, b)

vector<int> ans;
vector<bool> visited(2000000);
void dfs(const Graph &G, int v) {
  visited[v] = true;
  ans.push_back(v);
  for (auto nv : G[v]) {
    if (visited[nv]) continue;
    dfs(G, nv);
    ans.push_back(v);
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  Graph g(n + 1);
  REP(i, 0, n - 1) {
    cin >> a[i] >> b[i];
    g[a[i]].insert(b[i]);
    g[b[i]].insert(a[i]);
  }

  dfs(g, 1);

  REP(i, 0, (int)(ans.size() - 1)) { cout << ans[i] << " "; }
  cout << ans[ans.size() - 1] << endl;
  return 0;
}