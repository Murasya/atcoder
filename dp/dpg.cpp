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

vector<int> topological_sort(vector<vector<int>> &G, vector<int> &indegree,
                             int V) {
  vector<int> sorted_vertices;
  queue<int> que;
  for (int i = 0; i < V; i++) {
    if (indegree[i] == 0) {
      que.push(i);
    }
  }
  while (!que.empty()) {
    int v = que.front();
    que.pop();
    for (auto u : G[v]) {
      indegree[u] -= 1;
      if (indegree[u] == 0) que.push(u);
    }
    sorted_vertices.push_back(v);
  }
  return sorted_vertices;
}

int main() {
  int n, m;
  cin >> n >> m;
  Graph g(n);
  vector<int> indeg(n, 0);
  REP(i, 0, m) {
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    g[x].push_back(y);
    indeg[y] += 1;
  }
  vector<int> vertices = topological_sort(g, indeg, n);
  vector<int> dp(n + 5);

  for (auto v : vertices) {
    for (auto to : g[v]) {
      chmax(dp[to], dp[v] + 1);
    }
  }
  int ans = 0;
  for (auto i : dp) {
    chmax(ans, i);
  }
  cout << ans << endl;
  return 0;
}