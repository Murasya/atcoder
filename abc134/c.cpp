#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n;
  cin>>n;
  vector<int> a(n);
  int max_1 = 0, idx;
  REP(i,0,n) {
    cin >> a[i];
    if(max_1 < a[i]) {
      max_1 = a[i];
      idx = i;
    }
  }
  a.erase(a.begin() + idx);
  int max_2 = *max_element(a.begin(), a.end());
  REP(i,0,n) {
    if(i!=idx) {
      cout << max_1 << endl;
    } else {
      cout << max_2 << endl;
    }
  }
  return 0;
}