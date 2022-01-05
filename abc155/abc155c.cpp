#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  int n;
  cin >> n;
  map<string,int> m;
  vector<string> s(n);
  int _max = 0;
  REP(i,0,n) {
    cin>>s[i];
    m[s[i]]++;
    _max = max(_max, m[s[i]]);
  }
  set<string> ans;
  REP(i,0,n) {
    if(m[s[i]]==_max) ans.insert(s[i]);
  }
  for(auto i:ans) {
    cout << i << endl;
  }
  return 0;
}