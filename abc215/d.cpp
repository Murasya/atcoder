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

vector<pair<int, int>> prime_factrization(int n) {
  vector<pair<int, int>> res;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      int r = 0;
      do {
        r++;
        n /= i;
      } while (n % i == 0);
      res.push_back({i, r});
    }
  }
  if (n != 1) {
    res.push_back({n, 1});
  }
  return res;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  REP(i, 0, n) cin >> a[i];

  vector<bool> prime_table(100005);

  REP(i, 0, n) {
    auto p = prime_factrization(a[i]);
    for (auto j : p) {
      prime_table[j.first] = true;
    }
  }
  REP(i, 2, m) {
    if (prime_table[i]) {
      for (int j = i + i; j <= m; j += i) {
        prime_table[j] = true;
      }
    }
  }
  vector<int> ans;
  REP(i, 1, m + 1) {
    if (!prime_table[i]) {
      ans.push_back(i);
    }
  }
  cout << ans.size() << endl;
  show_array(ans);
  return 0;
}