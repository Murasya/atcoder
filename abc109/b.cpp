#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n;
  cin >> n;
  map<string, bool> m;
  string s;
  string ans = "Yes";
  char w = '.';
  REP(i,0,n) {
    cin >> s;
    if(!m[s]) m[s] = true;
    else {
      ans = "No";
    }
    if(i != 0 && s[0] != w) {
      ans = "No";
    }
    w = s[s.size()-1];
  }
  cout << ans << endl;
  return 0;
}