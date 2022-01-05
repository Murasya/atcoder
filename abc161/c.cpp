#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ll n, k;
  cin >> n >> k;
  ll ans = n % k;
  ans = min(abs(ans-k), ans);
  cout << ans << endl;
  return 0;
}