#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int a, b;
  string s;
  cin >> a >> b >> s;
  REP(i,0,a) {
    if(!('0' <= s[i] && s[i] <= '9')) {
      puts("No");
      return 0;
    }
  }
  if(s[a] != '-') {
    puts("No");
    return 0;
  }
  REP(i,a+1,a+b+1) {
    if(!('0' <= s[i] && s[i] <= '9')) {
      puts("No");
      return 0;
    }
  }
  puts("Yes");
  return 0;
}