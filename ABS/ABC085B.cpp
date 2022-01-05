#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  set<int> d;
  cin >> n;
  for(int i=0; i<n; i++) {
    int t;
    cin >> t;
    d.insert(t);
  }
  cout << d.size() << endl;
  return 0;
}