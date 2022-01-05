#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  int sum_t = 0;
  REP(i,0,n) {
    cin >> t[i];
    sum_t += t[i];
  }
  int m;
  cin >> m;
  vector<int> p(m), x(m);
  REP(i,0,m) {
    cin>> p[i] >> x[i];
    cout << sum_t - t[p[i]-1] + x[i] << endl;
  }
  return 0;
}