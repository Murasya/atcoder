#include<bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c;
  cin >> a >> b >> c;
  int ans = 0;
  while(a%2==0 && b%2==0 && c%2==0) {
    if(a == b && b == c) {
      ans = -1;
      break;
    }
    int na = b/2 + c/2;
    int nb = a/2 + c/2;
    int nc = a/2 + b/2;
    ans++;
    a = na; b = nb; c = nc;
  }
  cout << ans << endl;
  return 0;
}