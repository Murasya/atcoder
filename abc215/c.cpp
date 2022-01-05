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
  string s;
  int k, i = 0;
  cin >> s >> k;
  sort(s.begin(), s.end());
  do {
    i++;
    if (i == k) {
      cout << s << endl;
      break;
    }
  } while (next_permutation(s.begin(), s.end()));
  return 0;
}