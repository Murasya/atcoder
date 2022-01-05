#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n,m;
  cin >> n >> m;
  pair<int,int> range;
  range = {1, n};
  REP(i,0,m) {
    int l,r;
    cin >> l >> r;
    range.first = max(range.first, l);
    range.second = min(range.second, r);
  }
  int ans = max(0, range.second - range.first + 1);
  cout << ans << endl;
  return 0;
}