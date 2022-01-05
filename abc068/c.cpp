#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> from1;
  map<int, bool> toN;
  for(int i=0; i<m; i++) {
    int a,b;
    cin >> a >> b;
    if(a == 1) {
      from1.push_back(b);
    } else if(b == n) {
      toN[a] = true;
    }
  }
  for(auto i: from1) {
    if(toN[i]) {
      cout << "POSSIBLE" << endl;
      return 0;
    }
  }
  cout << "IMPOSSIBLE" << endl;
  return 0;
}