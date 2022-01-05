#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)
#define RREP(i,j,k) for(int i=j; i>=k; i--)
#define show_array(a) for(auto i: a) {cout << i << endl;}

int main() {
  int n,x;
  cin >> n >> x;
  vector<int> a(n);
  int sum = 0;
  REP(i,0,n) cin >> a[i];
  REP(i,0,n) {
    if(i %2==0) {
      sum += a[i];
    } else {
      sum += a[i]-1;
    }
  }
  if(sum <= x) {
    puts("Yes");
  } else {
    puts("No");
  }
  return 0;
}