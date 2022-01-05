#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  int ans = 0;
  int minn = 2000000;
  REP(i,0,n) {
    cin>> p[i];
    if(minn > p[i]) {
      minn = p[i];
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}