#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n,m;
  cin >> n >> m;
  vector<int> a(m), b(m);
  map<int,int> ma;
  REP(i,0,m) {
    cin >> a[i] >> b[i];
    ma[a[i]]++;
    ma[b[i]]++;
  }
  REP(i,1,n+1) {
    cout << ma[i] << endl;
  }
  return 0;
}