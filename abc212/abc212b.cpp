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
  int num;
  cin >> num;
  vector<int> x(4);
  x[0] = num / 1000;
  x[1] = (num % 1000) / 100;
  x[2] = (num % 100) / 10;
  x[3] = num % 10;

  if (x[0] == x[1] && x[1] == x[2] && x[2] == x[3])
    puts("Weak");
  else if ((x[0] + 1) % 10 == x[1] && (x[1] + 1) % 10 == x[2] &&
           (x[2] + 1) % 10 == x[3])
    puts("Weak");
  else
    puts("Strong");
  return 0;
}