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
  int s, t;
  cin >> s >> t;
  int count = 0;
  REP(a, 0, s + 1) {
    REP(b, 0, s - a + 1) {
      REP(c, 0, s - a - b + 1) {
        if (a + b + c <= s && a * b * c <= t) {
          count++;
        }
      }
    }
  }
  cout << count << endl;
  return 0;
}