#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int h, ans=0;
  int pre_h = 0;
  int count = 0;
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> h;
    if(pre_h >= h) {
      count++;
    } else {
      ans = max(ans, count);
      count = 0;
    }
    pre_h = h;
  }
  ans = max(ans, count);
  cout << ans << endl;
  return 0;
} 