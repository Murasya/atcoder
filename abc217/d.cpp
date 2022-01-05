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
  ll l;
  int q;
  cin >> l >> q;
  set<int> cp;
  cp.insert(0);
  cp.insert(l);
  rep(i, 0, q) {
    int c, x;
    cin >> c >> x;
    if (c == 1) {
      cp.insert(x);
    } else {
      auto it = cp.lower_bound(x);
      p(*it - *prev(it));
    }
  }
  return 0;
}