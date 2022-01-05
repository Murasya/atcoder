#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n,d;
  cin >> n >> d;
  int x[n][d];
  REP(i,0,n) {
    REP(j,0,d) {
      cin >> x[i][j];
    }
  }
  int ans = 0;
  REP(i,0,n) {
    REP(j,i+1,n) {
      int a=0;
      REP(k,0,d) {
        a += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
      }
      REP(k,floor(sqrt(a)),ceil(sqrt(a))+1) {
        if(k*k == a) {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}