#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)

int main() {
  ll a,b;
  cin >> a >> b;
  if((a<=0 && b>=0) || (a==0 || b==0)) {
    puts("Zero");
  } else if(a>0 && b>0) {
    puts("Positive");
  } else {
    int n = b-a+1;
    if(n%2==0) {
      puts("Positive");
    } else {
      puts("Negative");
    }
  }
  return 0;
}