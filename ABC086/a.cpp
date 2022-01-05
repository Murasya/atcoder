#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int a,b;
  cin >> a >> b;
  if(a*b % 2 == 0) {
    puts("Even");
  } else {
    puts("Odd");
  }
  return 0;
}