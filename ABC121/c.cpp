#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int m, n;
  cin >> n >> m;
  vector<pair<ll, int>> ab(n);
  for(int i=0; i<n; i++) {
    cin >> ab[i].first >> ab[i].second;
  }
  sort(ab.begin(), ab.end());
  ll ans = 0;
  int j=0;
  for(int i=0; i<m; i++) {
    ans += ab[j].first;
    ab[j].second--;
    if(ab[j].second == 0) {
      j++;
    }
  }
  cout << ans << endl;
  return 0;
}