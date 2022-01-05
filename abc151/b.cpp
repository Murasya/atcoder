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
  int n, k, m;
  cin >> n >> k >> m;
  vector<int> a(n);
  int sum = 0;
  REP(i, 0, n - 1) {
    cin >> a[i];
    sum += a[i];
  }
  int diff = m * n - sum;
  if (diff > k) {
    cout << -1 << endl;
  } else if (diff > 0)
    cout << diff << endl;
  else {
    cout << 0 << endl;
  }

  return 0;
}