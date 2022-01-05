#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, j, k) for (int i = j; i < k; i++)
#define RREP(i, j, k) for (int i = j; i >= k; i--)
#define show_array(a)  \
  for (auto i : a) {   \
    cout << i << endl; \
  }
#define INF 1001001001
#define PII pair<int, int>
#define Graph vector<vector<int>>
#define chmin(a, b) a = min(a, b)
#define chmax(a, b) a = max(a, b)

int main() {
  int n;
  cin >> n;
  vector<ll> s(n), t(n);
  REP(i, 0, n) { cin >> s[i]; }
  int min_t = INF;
  int min_i;
  REP(i, 0, n) {
    cin >> t[i];
    if (min_t > t[i]) {
      min_t = t[i];
      min_i = i;
    }
  }
  vector<ll> m(n + 1);
  REP(i, 0, n) { m[i] = t[i]; }
  int i = min_i;
  REP(j, 0, n) {
    if (i == n) i = 0;
    int ni = i + 1 >= n ? 0 : i + 1;
    if (m[ni] > (m[i] + s[i])) {
      m[ni] = m[i] + s[i];
    }
    i++;
  }
  REP(i, 0, n) { cout << m[i] << endl; }
  return 0;
}