#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using namespace atcoder;
using mint = modint1000000007;
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

// mint bfs(int v, int n)
// {
//   queue<int> q;
//   vector<bool> flag(n, false);
//   vector<int> dist(n, 0);
//   mint ans = 1;

//   flag[v] = true;
//   q.push(v);
//   bool finish = false;
//   while (!q.empty())
//   {
//     int a = q.front();
//     q.pop();
//     int count = 0;
//     for (auto i : g[a])
//     {
//       if (!flag[i])
//       {
//         count++;
//         flag[i] = true;
//         dist[i] = dist[a] + 1;
//         q.push(i);
//       }
//       if (i == n - 1)
//       {
//         finish = true;
//       }
//     }
//     ans *= max(1, count);
//   }
//   return ans;
// }

int main()
{
  int n, m;
  cin >> n >> m;
  Graph g(n);
  REP(i, 0, m)
  {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  vector<int> dist(n, INF);
  queue<int> q;
  q.push(0);
  dist[0] = 0;
  vector<int> vs;
  while (!q.empty())
  {
    int v = q.front();
    q.pop();
    vs.push_back(v);
    for (int u : g[v])
    {
      if (dist[u] != INF)
        continue;
      dist[u] = dist[v] + 1;
      q.push(u);
    }
  }

  vector<mint> dp(n);
  dp[0] = 1;
  for (int v : vs)
  {
    for (int u : g[v])
    {
      if (dist[u] == dist[v] + 1)
      {
        dp[u] += dp[v];
      }
    }
  }
  cout << dp[n - 1].val() << endl;
  return 0;
}