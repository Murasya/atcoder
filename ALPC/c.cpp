#include<bits/stdc++.h>
#include<atcoder/math>
using namespace atcoder;
using namespace std;
#define ll long long

int main() {
  int t;
  cin >> t;
  while(t--) {
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    cout << floor_sum(n, m, a, b) << endl;
  }
  return 0;
}