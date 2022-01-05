#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b, ans=0;
  cin >> n >> a >> b;
  for(int i=1; i<=n; i++) {
    int res=0;
    int num = i;
    while(num) {
      res += num % 10;
      num /= 10;
    }
    if(a <= res && res <= b) {
      ans += i;
    }
  }
  cout << ans << endl;
  return 0;
}