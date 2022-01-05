#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) REP2(i,0,n)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ll long long

int main() {
  int n;
  int a[200];
  cin >> n;
  int res = 0;
  for(int i=0; i<n; i++) {
    cin >> a[i];
  }
  bool flag = true;
  while(flag) {
    for(int i=0; i<n; i++) {
      if(a[i] % 2 == 0) {
        a[i] /= 2;
      } else 
        flag = false;
    }
    if(flag) res++;
  }
  cout << res << endl;

  return 0;
}