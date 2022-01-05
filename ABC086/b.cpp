#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int a,b;
  cin >> a >> b;
  string abs = to_string(a) + to_string(b);
  int ab = atoi(abs.c_str());
  double sqr = floor(sqrt(ab));
  if(ab == sqr*sqr) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}