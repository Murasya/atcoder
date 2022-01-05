#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)
#define RREP(i,j,k) for(int i=j; i>=k; i--)
#define show_array(a) for(auto i: a) {cout << i << endl;}

int main() {
  ll p;
  cin >> p;
  vector<ll> c;
  ll t=1;
  REP(i,1,11) {
    t*=i;
    c.push_back(t);
  }
  int ans=0;
  RREP(i,9,0) {
    while(c[i]<=p) {
      p-=c[i];
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}