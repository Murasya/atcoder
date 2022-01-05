#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  vector<int> a(3);
  cin >> a[0]>> a[1]>>a[2];
  sort(a.begin(), a.end());
  cout << a[1]+a[2] << endl;

  return 0;
}