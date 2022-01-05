#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n;
  cin >> n;
  vector<pair<int,int>> a(n);
  REP(i,0,n) {
    cin >> a[i].first;
    a[i].second = i+1;
  }
  sort(a.begin(), a.end());
  REP(i,0,n-1) {
    cout << a[i].second << " ";
  }
  cout << a[n-1].second << endl;
  return 0;
}