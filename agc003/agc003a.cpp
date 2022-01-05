#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  string s;
  cin >> s;
  string ans = "Yes";
  if((s.find('W') != string::npos && s.find('E') == string::npos) || (s.find('W') == string::npos && s.find('E') != string::npos) || (s.find('N') != string::npos && s.find('S') == string::npos) || (s.find('N') == string::npos && s.find('S') != string::npos)) {
    ans = "No";
  }
  cout << ans << endl;
  return 0;
}