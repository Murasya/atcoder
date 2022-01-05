#include<bits/stdc++.h>
#include<atcoder/modint>
using namespace std;
using namespace atcoder;
using mint = modint1000000007;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)
#define RREP(i,j,k) for(int i=j; i>=k; i--)
#define show_array(a) for(auto i: a) {cout << i << endl;}


int main() {
  int n;
  cin >> n;
  mint ans = 1;
  vector<ll> c(n);
  REP(i,0,n) {
    cin >> c[i];
  }
  sort(c.begin(), c.end());
  REP(i,0,n) {
    ans *= c[i]-i;
  }
  cout << ans.val() << endl;
  return 0;
}