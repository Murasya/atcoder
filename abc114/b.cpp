#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  string s;
  cin >> s;
  int ans = 1000;
  REP(i,0,s.size()-2) {
    string sub = s.substr(i,3);
    int a = atoi(sub.c_str());
    ans = min(ans, abs(a-753));
  }
  cout << ans << endl;
  return 0;
}