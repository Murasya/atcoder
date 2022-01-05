#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> x(n);
  for(auto &nx: x) cin >> nx;
  int sum = 0;
  for(int i=0; i<n; i++) {
    sum += x[i];
  }
  int p = round((double)sum/n);
  long long ans = 0;
  for(int v: x) {
    ans += (v - p) * (v - p);
  }
  cout << ans << endl;
  return 0;
}