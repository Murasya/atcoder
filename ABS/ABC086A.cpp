#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) REP2(i,0,n)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ll long long

int main() {
  int a,b;
  cin >> a >> b;
  if(a*b % 2 == 0) {
    cout << "Even" << endl;
  } else {
    cout << "Odd" << endl;
  }
  return 0;
}