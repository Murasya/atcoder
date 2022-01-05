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
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i, 0, n) cin >> a[i];
  vector<vector<vector<double>>> dp(
      n + 1, vector<vector<double>>(n + 1, vector<double>(n + 1)));
  REP(i, 0, n) {
    REP(j, 0, n) {
      REP(k, 0, n) {}
    }
  }
  return 0;
}