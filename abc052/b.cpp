#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n;
  string s;
  cin >> n >> s;
  int x=0, max_x=0;
  for(auto c: s) {
    if(c=='I') {
      x++;
    } else {
      x--;
    }
    max_x = max(max_x, x);
  }
  cout << max_x << endl;
  return 0;
}
