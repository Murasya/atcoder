#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int h,w;
  cin >> h >> w;
  string t;
  REP(i,0,w+2) {t.push_back('#');}
  vector<string> m(h+2, t);
  REP(i,1,h+1) {
    REP(j,1,w+1) {
      cin >> m[i][j];
    }
  }
  REP(i,0,h+2) {
    REP(j,0,w+2) {
      cout << m[i][j];
    }
    cout << endl;
  }
  return 0;
}