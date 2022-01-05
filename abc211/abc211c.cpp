#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using namespace atcoder;
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
using mint = modint1000000007;

// int main()
// {
//   string s;
//   string chokudai = "chokudai";
//   mint ans = 0;
//   int i = 0;
//   cin >> s;
//   REP(i, 0, s.size())
//   {
//     auto c1 = s[i];
//     if (c1 == 'c')
//       ans++;
//     auto pos = chokudai.find(c1);
//     if (pos == string::npos)
//       continue;
//     int count = 0;
//     REP(j, i + 1, s.size())
//     {
//       auto c2 = s[j];
//       if (c2 == chokudai[pos + 1])
//       {
//         count++;
//       }
//       if (c2 == chokudai[pos + 2])
//       {
//         ans += count - 1;
//       }
//     }
//   }
//   cout << ans.val() << endl;
//   return 0;
// }

int main()
{
  string s;
  cin >> s;
  int n = s.size();
  string t = "chokudai";
  const int mod = 1000000007;
  vector<vector<int>> dp(n + 1, vector<int>(9));
  REP(i, 0, n + 1)
  {
    REP(j, 0, 9)
    {
      if (j == 0)
        dp[i][j] = 1;
      else if (i == 0)
      {
        dp[i][j] = 0;
      }
      else if (s[i - 1] != t[j - 1])
      {
        dp[i][j] = dp[i - 1][j];
      }
      else if (s[i - 1] == t[j - 1])
      {
        dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % mod;
      }
      //cout << i << " " << j << " " << dp[i][j] << endl;
    }
  }
  cout << dp[n][8] << endl;
  return 0;
}