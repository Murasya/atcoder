#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n;
  cin >> n;
  vector<double> v(n);
  REP(i,0,n) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  double ans = (v[0]+v[1])/2;
  REP(i,2,n) {
    ans = (v[i]+ans)/2.0;
  }
  cout << ans << endl;
  return 0;
}