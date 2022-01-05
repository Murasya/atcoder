#include<bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  vector<int> a(n);
  int ans = 0;
  int sum = 0;
  for(int i=0; i<n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  for(int i=0; i<n; i++) {
    if(!(a[i] < sum/(4.0*m))) {
      ans++;
    }
  }
  if(ans >= m) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}