#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  vector<int> a(5);
  cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
  int min_n = 10,idx;
  REP(i,0,5) {
    if(a[i]%10 != 0) {
      if(min_n > a[i]%10) {
        min_n = a[i]%10;
        idx = i;
      }
    }
  }
  int ans=0;
  REP(i,0,5) {
    if(i!=idx) {
      ans += ceil(a[i]/10.0)*10;
    } else {
      ans += a[i];
    }
  }
  cout << ans << endl;
  return 0;
}