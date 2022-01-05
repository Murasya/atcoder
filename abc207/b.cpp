#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  ll a,b,c,d;
  int ans=0;
  cin >> a >> b >> c >> d;
  for(int i=1; i<=a; i++) {
    if(a <= (d*c-b)*i) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}