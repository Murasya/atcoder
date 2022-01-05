#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  ll a,b,c,k;
  cin >> a >> b >> c >> k;
  ll ans;
  if(k%2==0) {
    ans = a - b;
  } else {
    ans = b - a;
  }
  cout << ans << endl;
  return 0;
}