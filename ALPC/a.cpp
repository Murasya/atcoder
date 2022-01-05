#include<bits/stdc++.h>
#include<atcoder/dsu>
using namespace std;
using namespace atcoder;

int main() {
  int n, q;
  cin >> n >> q;
  dsu d(n);
  for(int i=0; i<q; i++) {
    int t, u, q;
    cin >> t >> u >> q;
    if(t == 0) {
      d.merge(u, q);
    } else {
      if(d.same(u,q)) {
        cout << "1" << endl;
      } else {
        cout << "0" << endl;
      }
    }
  }
  return 0;
}