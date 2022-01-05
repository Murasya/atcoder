#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n, t, a;
  cin >> n >> t >> a;
  vector<int> h(n);
  double min_d = 1000000;
  int ans;
  REP(i,0,n) {
    cin >> h[i];
    double d = abs(a-(t-h[i]*0.006));
    if(min_d > d) {
      min_d = d;
      ans = i+1;
    }
  }
  cout << ans << endl;
  return 0;
}