#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int a,b;
  cin >> a >> b;
  int ans=0;
  REP(i,a,b+1) {
    string n = to_string(i);
    if(n[0]==n[4] && n[1]==n[3]) ans++;
  }
  cout << ans << endl;
  return 0;
}