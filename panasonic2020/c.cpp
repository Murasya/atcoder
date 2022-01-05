#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ll a,b,c;
  cin >> a >> b >> c;
  if(c-a-b > 0 && 4*a*b < (c-a-b)*(c-a-b)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}