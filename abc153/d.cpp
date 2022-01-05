#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  ll h;
  ll ans = 0, cnt = 1;
  cin >> h;
  while(h > 0) {
    ans += cnt;
    h = h/2;
    cnt *= 2;
  }
  cout << ans << endl;
  return 0;
}