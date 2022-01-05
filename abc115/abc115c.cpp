#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n,k;
  cin >> n >> k;
  vector<int> h(n);
  REP(i,0,n) {
    cin >> h[i];
  } 
  sort(h.begin(), h.end());
  int _min = 1e9;
  REP(i,0,n-k+1) {
    int hmax = h[i+k-1];
    int hmin = h[i];
    _min = min(_min, hmax-hmin);
  }
  cout << _min << endl;
  return 0;
}