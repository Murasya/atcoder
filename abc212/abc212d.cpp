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
  int q;
  cin >> q;
  multiset<ll> s;
  // priority_queueを使うといい
  // priority_queue<ll, vector<ll>, greater<ll>> pq;
  ll allsum = 0;
  ll p, x;
  REP(i, 0, q) {
    cin >> p;
    if (p == 1) {
      cin >> x;
      x -= allsum;
      s.insert(x);
    }
    if (p == 2) {
      cin >> x;
      allsum += x;
    }
    if (p == 3) {
      auto it = s.begin();
      cout << *it + allsum << endl;
      s.erase(it);
    }
  }
  return 0;
}