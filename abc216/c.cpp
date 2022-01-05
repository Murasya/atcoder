#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, j, k) for (int i = j; i < k; i++)
#define rrep(i, j, k) for (int i = j; i >= k; i--)
#define p(s) cout << s << endl
#define show_array(a) \
  for (auto i : a) p(i)
#define INF 1001001001
#define PII pair<int, int>
#define Graph vector<vector<int>>
#define chmin(a, b) a = min(a, b)
#define chmax(a, b) a = max(a, b)

int main() {
  ll n;
  cin >> n;
  string s;
  while (n > 1) {
    if (n % 2 == 1) {
      s.insert(0, "A");
    }
    s.insert(0, "B");
    n /= 2;
  }
  s.insert(0, "A");
  cout << s << endl;
  return 0;
}