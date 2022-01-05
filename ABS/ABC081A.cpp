#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) REP2(i,0,n)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ll long long

int main() {
  string s;
  cin >> s;
  cout << count(s.begin(), s.end(), '1') << endl;
  return 0;
}