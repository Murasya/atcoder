#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n,q;
  ll k;
  cin >> n >> k >> q;
  vector<int> p(n+1,0);
  REP(i,0,q) {
    int a;
    cin >> a;
    p[a]++;
  }
  REP(i,1,n+1) {
    if(q-p[i] <= k-1) {
      puts("Yes");
    } else {
      puts("No");
    }
  }
  return 0;
}