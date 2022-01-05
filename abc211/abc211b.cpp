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
  vector<string> s(4);
  cin >> s[0] >> s[1] >> s[2] >> s[3];
  sort(s.begin(), s.end());
  if (s[0] == "2B" && s[1] == "3B" && s[2] == "H" && s[3] == "HR")
  {
    puts("Yes");
  }
  else
  {
    puts("No");
  }
  return 0;
}