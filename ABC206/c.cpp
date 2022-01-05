#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ll n;
  cin >> n;
  vector<int> a;
  for(int i=0; i<n; i++) {
    int t;
    cin >> t;
    a.push_back(t);
  }
  ll ans = n*(n-1)/2;
  sort(a.begin(), a.end());
  a.push_back(-1);
  ll c = 1;
  for(int i=0; i<n; i++) {
    if(a[i] != a[i+1]) {
      ans -= c*(c-1)/2;
      c = 1;
    } else {
      c++;
    }
  }
  cout << ans << endl;
  return 0;
}