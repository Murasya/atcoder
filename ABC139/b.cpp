#include<bits/stdc++.h>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  if(b==1) {
    cout << 0 << endl;
    return 0;
  }
  int s=a, ans = 1;
  while(s < b) {
    s += a-1;
    ans++;
  }
  cout << ans << endl;
  return 0;
}