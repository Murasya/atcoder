#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

bool is_prime(int x) {
  if(x<=1) return false;
  for(int i=2; i*i<=x; i++)
    if(x%i==0) return false;
  return true;
}

int main() {
  int x;
  cin >> x;
  REP(i, x, 1000000) {
    if(is_prime(i)) {
      cout << i << endl;
      break;
    }
  }
  return 0;
}