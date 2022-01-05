#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int a,b,k;
  cin >> a >> b >> k;
  REP(i,a,a+k) {
    if(i>b) break;
    cout << i << endl;
  }
  REP(i,b-k+1,b+1) {
    if(i<a+k) continue;
    cout << i << endl;
  }
  return 0;
}