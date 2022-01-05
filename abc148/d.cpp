#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i,0,n) cin >> a[i];
  int j=1, ans = 0;
  REP(i,0,n) {
    if(a[i] == j) {
      j++;
    } else {
      ans++;
    }
  }
  if(j==1) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}