#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  string s;
  cin >> s;
  int c=0;
  int ans=0;
  REP(i,0,s.size()) {
    switch(s[i]) {
      case 'A':
      case 'C':
      case 'G':
      case 'T':
        c++;
        break;
      default:
        ans = max(ans, c);
        c=0;
        break;
    }
  }
  ans = max(ans, c);
  cout << ans << endl;
  return 0;
}