#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int tc=0, xc=0, yc=0;
  for(int i=0; i<n; i++) {
    int t, x, y;
    cin >> t >> x >> y;
    int m = (t-tc) - (abs(x-xc) + abs(y-yc));
    if(!(m >= 0 && m % 2 == 0)) {
      cout << "No" << endl;
      return 0;
    }
    tc = t;
    xc = x;
    yc = y;
  }
  cout << "Yes" << endl;
  return 0;
}