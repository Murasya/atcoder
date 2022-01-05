#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  string s;
  cin >> s;
  char s1 = '.';
  int c = 0;
  REP(i,0,4) {
    REP(j,i+1,4) {
      if(s[i] == s[j] && s[i] != s1) {
        c++;
        s1 = s[i];
      }
    }
  }
  if(c>=2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}