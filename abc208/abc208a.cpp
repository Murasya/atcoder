#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int a,b;
  cin >> a >> b;
  if(a <= b && b<=a*6) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}