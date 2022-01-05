#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, x=0, y=0, t=0;
  cin >> n;
  bool isPossible = true;
  for(int i=0; i<n; i++) {
    int t1, x1, y1;
    cin >> t1 >> x1 >> y1;
    int diff;
    if((diff = (t1-t) - abs(x1-x) - abs(y1-y)) >= 0 && diff % 2 == 0) {
      x = x1;
      y = y1;
      t = t1;
    } else {
      isPossible = false;
      break;
    }
  }
  if(isPossible) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}