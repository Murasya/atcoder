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
  vector<ll> a(3 * n);
  REP(i, 0, 3 * n) { cin >> a[i]; }
  sort(a.begin(), a.end());
  ll sum = 0;
  for (int i = n; i < 3 * n; i += 2) {
    sum += a[i];
  }
  cout << sum << endl;
  return 0;
}