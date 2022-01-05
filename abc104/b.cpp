#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  string s;
  cin >> s;
  bool flag = false;
  REP(i,2,s.size()-1) {
    if(s[i] == 'C') {
      s.erase(s.begin() + i);
      flag = true;
      break;
    }
  }
  if(!flag) {
    puts("WA");
    return 0;
  }
  if(s[0] == 'A') {
    s.erase(s.begin());
  } else {
    puts("WA");
    return 0;
  }
  REP(i,0,s.size()) {
    if(s[i] < 'a' || s[i] > 'z') {
      puts("WA");
      return 0;
    }
  }
  cout << "AC" << endl;
  return 0;
}