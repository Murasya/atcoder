#include<bits/stdc++.h>
using namespace std;
#define REP(i,j,k) for(int i=j; i<k; i++)
int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  REP(i,0,n) cin >> p[i];
  int ans=0;
  REP(i,1,n-1) {
    if((p[i-1] < p[i] && p[i] < p[i+1]) || (p[i+1] < p[i] && p[i] < p[i-1])) {
      ans++;
    }
  }
  cout << ans << endl;
}