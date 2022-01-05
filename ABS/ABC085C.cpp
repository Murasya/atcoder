#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, y;
  cin >> n >> y;
  bool flag = false;
  int i,j,k;
  for(i=0; i<=n; i++) {
    for(j=0; i+j<=n; j++) {
      k = n - i - j;
      if(i*10000+j*5000+k*1000 == y) {
        flag = true;
        break;
      }
    }
    if(flag) break;
  }
  if(flag)
    cout << i << ' ' << j << ' ' << k << endl;
  else
    cout << "-1 -1 -1" << endl;
  return 0;
}