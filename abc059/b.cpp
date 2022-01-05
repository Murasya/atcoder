#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  string a,b;
  cin >> a >> b;
  if(a.size() > b.size()) {
    puts("GREATER");
    return 0;
  } else if(a.size() < b.size()) {
    puts("LESS");
    return 0;
  } else {
    REP(i,0,a.size()) {
      if(a[i] > b[i]) {
        puts("GREATER");
        return 0;
      } else if(a[i] < b[i]) {
        puts("LESS");
        return 0;
      }
    }
  }
  puts("EQUAL");
  return 0;
}