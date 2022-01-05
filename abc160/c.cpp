#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int k,n;
  cin >> k >> n;
  int max_diff = 0;
  vector<int> a(n+2);
  a[0] = 0;
  for(int i=1; i<=n; i++) {
    cin >> a[i];
    max_diff = max(a[i]-a[i-1], max_diff);
  }
  max_diff = max(max_diff, k-a[n]+a[1]);
  cout << k-max_diff << endl;
  return 0;
}