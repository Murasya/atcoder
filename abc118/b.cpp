#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n,m;
  cin >> n >> m;
  map<int,int> f;
  REP(i,0,n) {
    int k;
    cin >> k;
    REP(j,0,k) {
      int a;
      cin >> a;
      f[a]++;
    }
  }
  int ans=0;
  REP(i,1,m+1) {
    if(f[i] == n) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}