#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  vector<double> l(n),r(n);
  REP(i,0,n) {
    cin >> t[i] >> l[i] >> r[i];
    if(t[i]==2 || t[i]==4) {
      r[i] -= 0.5;
    }
    if(t[i]==3 || t[i]==4) {
      l[i] += 0.5;
    }
  }
  int ans = 0;
  REP(i,0,n) {
    REP(j,i+1,n) {
      if(max(l[i],l[j]) <= min(r[i],r[j])) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}