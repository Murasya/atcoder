#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n;
  cin >> n;
  vector<ll> l;
  l.push_back(2);
  l.push_back(1);
  REP(i,2,n+1) {
    l.push_back(l[i-1]+l[i-2]);
  }
  cout << l[n] << endl;
  return 0;
}