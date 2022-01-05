#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  string s;
  cin >> s;
  if(s[2] == s[3] && s[4] == s[5]) {
    puts("Yes");
  } else
    puts("No");
  return 0;
}