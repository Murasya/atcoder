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
  int n, k;
  cin >> n >> k;
  vector<int> c(n);
  REP(i, 0, n) cin >> c[i];
  map<int, int> m;
  int ans;
  REP(j, 0, k) { m[c[j]]++; }
  ans = m.size();
  REP(i, k, n) {
    if (--m[c[i - k]] == 0) m.erase(c[i - k]);
    m[c[i]]++;
    chmax(ans, (int)m.size());
  }
  cout << ans << endl;
  return 0;
}