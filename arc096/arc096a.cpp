#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int a,b,c,x,y;
  cin >> a >> b >> c >> x >> y;
  int ans = 0;
  if(a+b > c*2) {
    ans += min(x,y)*2*c;
    if(x>y) {
      ans += (x-y)*min(a,c*2);
    } else if(x<y) {
      ans += (y-x)*min(b,c*2);
    }
  } else {
    ans += x*a+y*b;
  }
  cout << ans << endl;
  return 0;
}