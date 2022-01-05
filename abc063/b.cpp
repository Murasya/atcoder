#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  string s;
  cin >> s;
  string ans = "yes";
  map<char, bool> m;
  for(auto c: s) {
    if(!m[c]) {
      m[c] = true;
    } else {
      ans = "no";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}