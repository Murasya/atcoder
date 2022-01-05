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
  string s;
  cin >> s;
  auto i = s.find_first_of('1');
  if (i % 2 == 0) {
    puts("Takahashi");
  } else {
    puts("Aoki");
  }
  return 0;
}