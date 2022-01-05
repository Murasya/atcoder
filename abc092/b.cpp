#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n, d, x;
  cin >> n >> d >> x;
  vector<int> a(n);
  int ans=0;
  REP(i,0,n) {
    cin >> a[i];
    int j=1;
    while(j<=d) {
      j += a[i];
      ans++;
    }
  }
  ans += x;
  cout << ans << endl;
  return 0;
}