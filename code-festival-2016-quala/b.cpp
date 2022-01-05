#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i,0,n) cin >> a[i];
  int ans = 0;
  REP(i,0,n) {
    if(a[a[i]-1] == i+1) {
      ans++;
    }
  }
  cout << ans/2 << endl;
  return 0;
}