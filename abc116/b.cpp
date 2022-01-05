#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int s, i=1;
  cin >> s;
  map<int, bool> m;
  while(!m[s]) {
    m[s] = true;
    if(s % 2 == 0) {
      s = s / 2;
    } else {
      s = 3 * s + 1;
    }
    i++;
  }
  cout << i << endl;
  return 0;
}