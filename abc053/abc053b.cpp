#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  string s;
  cin >> s;
  auto p1 = s.find('A');
  auto p2 = s.find_last_of('Z');
  cout << p2 - p1 + 1 << endl;
  return 0;
}