#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  string o,e;
  cin >> o >> e;
  string ans;
  REP(i,0,o.size()) {
    ans.push_back(o[i]);
    if(i < e.size())
      ans.push_back(e[i]);
  }
  cout << ans << endl;
  return 0;
}