#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ll h,w;
  cin >> h >> w;
  if(h == 1 || w == 1) {
    cout << 1 << endl;
    return 0;
  }
  ll ans;
  ans = ceil((h*w)/2.0);
  cout << ans << endl;
  return 0;
}