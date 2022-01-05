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

int main() {
  ll h, w, n;
  cin >> h >> w >> n;
  vector<pair<ll, ll>> a(n), b(n);
  REP(i, 0, n) {
    cin >> a[i].first >> b[i].first;
    a[i].second = i;
    b[i].second = i;
  }
  vector<pair<ll, ll>> ans(n + 2);
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  ll i = 0;
  ll pre_c = -1;
  for (auto c : a) {
    if (pre_c != c.first) {
      i++;
    }
    ans[c.second].first = i;
    pre_c = c.first;
  }
  i = 0;
  pre_c = -1;
  for (auto c : b) {
    if (pre_c != c.first) {
      i++;
    }
    ans[c.second].second = i;
    pre_c = c.first;
  }
  REP(i, 0, n) { cout << ans[i].first << " " << ans[i].second << endl; }
  return 0;
}