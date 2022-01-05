#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, j, k) for (int i = j; i < k; i++)

int main() {
  int n, m;
  cin >> n >> m;
  map<int, int> ma;
  int correct = 0, penalty = 0;
  REP(i, 0, m) {
    int p;
    string s;
    cin >> p >> s;
    if (ma[p] != -1) {
      if (s == "AC") {
        correct++;
        penalty += ma[p];
        ma[p] = -1;
      } else {
        ma[p]++;
      }
    }
  }
  cout << correct << " " << penalty << endl;
  return 0;
}