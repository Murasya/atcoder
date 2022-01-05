#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)
#define RREP(i,j,k) for(int i=j; i>=k; i--)
#define show_array(a) for(auto i: a) {cout << i << endl;}

int main() {
  ll n,k;
  cin >> n >> k;
  vector<pair<ll,int>> a(n);
  REP(i,0,n) {
    a[i].second = i;
    cin >> a[i].first;
  }
  sort(a.begin(), a.end());

  vector<ll> ans;
  REP(i,0,n) {
    ans.push_back(k/n);
  }
  REP(i,0,n) {
    if(k%n == i) break;
    ans[a[i].second]++;
  }
  show_array(ans);

  return 0;
}