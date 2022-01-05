#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int h,w;
  cin >> h >> w;
  list<string> c;
  REP(i,0,h) {
    string s;
    cin >> s;
    c.push_back(s);
    c.push_back(s);
  }
  for(auto s:c) {
    cout << s << endl;
  }
  return 0;
}