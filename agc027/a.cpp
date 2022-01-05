#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n;
  ll x;
  cin >> n >> x;
  vector<ll> a(n);
  REP(i,0,n) cin>> a[i];
  sort(a.begin(), a.end());
  int ans = 0;
  REP(i,0,n) {
    x -= a[i];
    if(x >= 0) ans++;
    else break;
  }
  if(x>0) ans--;
  cout << ans << endl;
  return 0;
}