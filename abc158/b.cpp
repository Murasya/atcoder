#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  ll n, a, b;
  cin >> n >> a >> b;
  ll ans = (n / (a + b)) * a;
  if(n % (a+b) < a) {
    ans += n % (a+b);
  } else {
    ans += a;
  }
  cout << ans << endl;
  return 0;
}