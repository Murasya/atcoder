#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int A,B,m;
  cin >> A >> B >> m;
  vector<int> a(A), b(B);
  int a_min = 100000, b_min = 100000;
  REP(i,0,A) {
    cin >> a[i];
    a_min = min(a_min, a[i]);
  }
  REP(i,0,B) {
    cin >> b[i];
    b_min = min(b_min, b[i]);
  }
  int ans = a_min + b_min;
  vector<int> x(m), y(m), c(m);
  REP(i,0,m) {
    cin >> x[i] >> y[i] >> c[i];
    ans = min(ans, a[x[i]-1] + b[y[i]-1] - c[i]);
  }
  cout << ans << endl;
  return 0;
}