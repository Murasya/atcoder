#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  string s;
  cin >> s;
  set<char> se;
  for(auto c:s) {
    se.insert(c);
  }
  char a='a';
  while(se.find(a) != se.end()) {
    a++;
  }
  if(a != '{') {
    cout << a << endl;
  } else {
    cout << "None" << endl;
  }
  return 0;
}