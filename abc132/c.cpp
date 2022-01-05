#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int n;
  cin >> n;
  vector<int> d(n);
  for(int i=0; i<n; i++) {
    cin >> d[i];
  }
  sort(d.begin(), d.end());
  int mid = n/2;
  cout << d[mid] - d[mid-1] << endl;
  return 0;
}