#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n, m ,x;
  cin >> n >> m >> x;
  vector<int> a(m);
  REP(i, 0, m) cin >> a[i];
  int cos1=0, cos2=0;
  int j=0;
  REP(i, 0, n+1) {
    if(j >= a.size()) {
      break;
    }
    if(i < x && a[j] == i) {
      cos1++;
      j++;
    } else if(i > x && a[j] == i) {
      cos2++;
      j++;
    }
  }
  cout << min(cos1, cos2) << endl;
  return 0;
}