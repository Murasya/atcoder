#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n,l;
  cin >> n >> l;
  vector<string> s(n);
  REP(i,0,n) {
    cin >> s[i];
  }
  sort(s.begin(), s.end());
  string ans = "";
  REP(i,0,n) {
    ans += s[i];
  }
  cout << ans << endl;
  return 0;
}