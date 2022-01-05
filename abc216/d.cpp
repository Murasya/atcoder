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
  int n, m;
  cin >> n >> m;
  vector<queue<int>> a(m);
  vector<vector<int>> pos(n + 1);
  rep(i, 0, m) {
    int k;
    cin >> k;
    rep(j, 0, k) {
      int tmp;
      cin >> tmp;
      a[i].push(tmp);
    }
    pos[a[i].front()].push_back(i);
  }

  return 0;
}