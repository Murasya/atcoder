#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n;
  cin >> n;
  vector<int> p(n), q(n);
  REP(i,0,n) cin >> p[i];
  REP(i,0,n) cin >> q[i];
  vector<int> v;
  REP(i,1,n+1) v.push_back(i);
  int index = 0, pn, qn;
  do {
    bool isP = true, isQ = true;
    REP(i,0,n) {
      if(p[i] != v[i]) {
        isP = false;
      }
      if(q[i] != v[i]) {
        isQ = false;
      }
    }
    if(isP)pn = index;
    if(isQ)qn = index;
    index++;
  } while(next_permutation(v.begin(), v.end()));
  cout << abs(pn-qn) << endl;
  return 0;
}