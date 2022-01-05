#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)


int main() {
  int n;
  cin >> n;
  vector<tuple<string, int, int>> r;
  REP(i,0,n) {
    string s;
    int p;
    cin >> s >> p;
    r.push_back(make_tuple(s, -p, i));
  }
  sort(r.begin(), r.end());

  REP(i,0,n) {
    cout << get<2>(r[i])+1 << endl;
  }
  return 0;
}