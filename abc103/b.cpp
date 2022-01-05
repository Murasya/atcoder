#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  string s,t;
  cin >> s >> t;
  REP(i,0,s.size()) {
    if(s == t) {
      cout << "Yes" << endl;
      return 0;
    }
    char c = s.back();
    for(int j=s.size()-1; j>0; j--) {
      s[j] = s[j-1];
    }
    s[0] = c;
  }
  cout <<  "No" << endl;
  return 0;
}
// substrを使うと良い