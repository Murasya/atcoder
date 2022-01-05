#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n>> k;
  vector<int> x(n);
  int ans = 0;
  for(int i=0; i<n; i++) {
    cin >> x[i];
    ans += min(abs(x[i]-k), x[i]) * 2;
  }
  cout << ans << endl;
  return 0;
}