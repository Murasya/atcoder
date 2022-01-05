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
  int n;
  cin >> n;
  vector<int> P(n);
  rep(i, 0, n) cin >> P[i];
  vector<int> q(n);
  rep(i, 0, n) { q[P[i] - 1] = i + 1; }
  rep(i, 0, q.size() - 1) { cout << q[i] << " "; }
  cout << q.back() << endl;
  return 0;
}