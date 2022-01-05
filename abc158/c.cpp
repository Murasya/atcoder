#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int a,b;
  cin >> a >> b;
  REP(i,0,10000) {
    if(floor(i*0.08)==a && floor(i*0.1)==b) {
      cout << i << endl;
      return 0;
    }
  }
  cout << "-1" << endl;
  return 0;
}