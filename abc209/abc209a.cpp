#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)
#define RREP(i,j,k) for(int i=j; i>=k; i--)
#define show_array(a) for(auto i: a) {cout << i << endl;}

int main() {
  int a,b;
  cin >> a >> b;
  if(b-a >= 0)
    cout << b-a+1 << endl;
  else
    cout << 0 << endl;
  return 0;
}

/*
max(0,b-a+1)で良い
*/