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
  vector<int> h(n + 5);
  REP(i, 0, n)
  cin >> h[i];

  vector<int> dp(n + 5, INF);
  dp[0] = 0;
  REP(i, 0, n)
  {
    dp[i + 1] = min(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
    dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
  }
  cout << dp[n - 1] << endl;
  return 0;
}