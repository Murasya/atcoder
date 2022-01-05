#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int x;
  cin >> x;
  int ans = 0;
  REP(b,1,1000) {
    REP(p,2,1000) {
      if(pow(b,p) <= x) {
        ans = max(ans,(int)pow(b,p));
      }
    }
  }
  cout << ans << endl;
  return 0;
}