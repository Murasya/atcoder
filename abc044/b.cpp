#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  string w;
  cin >> w;
  map<char,int> m;
  for(auto c:w) {
    m[c]++;
  }
  string ans = "Yes";
  for(auto c='a'; c<='z'; c++) {
    if(m[c] % 2 == 1) {
      ans = "No";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}