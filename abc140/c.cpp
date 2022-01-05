#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n;
  cin >> n;
  vector<int> b(n-1), a(n, 100000);
  int ans = 0;
  REP(i,0,n-1) {
    cin >> b[i];
    if(a[i] > b[i]) {
      a[i] = b[i];
    }
    a[i+1] = b[i];
  }
  int sum=0;
  REP(i,0,n) {
    sum+=a[i];
  }
  cout << sum << endl;
  return 0;
}