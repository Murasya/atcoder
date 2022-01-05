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
  int n, k;
  cin >> n >> k;
  vector<int> h(n + 1000);
  REP(i, 0, n)
  {
    cin >> h[i];
  }
  vector<int> dp(n + 1000, INF);
  dp[0] = 0;
  REP(i, 0, n)
  {
    REP(j, 1, k + 1)
    {
      dp[i + j] = min(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
    }
  }
  //show_array(dp);
  cout << dp[n - 1] << endl;
  return 0;
}