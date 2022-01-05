#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  string s;
  cin >> s;
  int f0=0, f1=0;
  REP(i,0,s.size()) {
    if(i%2==0) {
      if(s[i]=='0') {
        f1++;
      } else {
        f0++;
      }
    } else {
      if(s[i]=='0') {
        f0++;
      } else {
        f1++;
      }
    }
  }
  cout << min(f0,f1) << endl;
  return 0;
}