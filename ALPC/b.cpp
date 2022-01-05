#include<bits/stdc++.h>
#include<atcoder/fenwicktree>
using namespace std;
using namespace atcoder;

int main() {
  int n,q;
  cin >> n >> q;
  fenwick_tree<long long> fw(n);
  for(int i=0; i<n; i++) {
    int t;
    cin >> t;
    fw.add(i, t);
  }
  for(int i=0; i<q; i++) {
    int t, u, v;
    cin >> t >> u >> v;
    if(t == 0) {
      fw.add(u, v);
    } else {
      cout << fw.sum(u, v) << endl;
    }
  }
  return 0;
}