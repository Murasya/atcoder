#include<bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int c = ceil(n/1.08);
  if(n == floor(c*1.08)) {
    cout << c << endl;
  } else {
    cout << ":(" << endl;
  }
  return 0;
}