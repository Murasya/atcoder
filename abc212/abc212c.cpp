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
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  REP(i, 0, n) { cin >> a[i]; }
  REP(i, 0, m) { cin >> b[i]; }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int ans = INF;
  int i = 0, j = 0;
  while (i < a.size() && j < b.size()) {
    chmin(ans, abs(a[i] - b[j]));
    if (a[i] < b[j]) {
      i++;
    } else {
      j++;
    }
  }
  cout << ans << endl;
  return 0;
}