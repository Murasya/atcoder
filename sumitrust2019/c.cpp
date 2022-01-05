#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int x;
  cin >> x;
  vector<bool> dp(100002);
  dp[0] = true;
  dp[100] = true;
  dp[101] = true;
  dp[102] = true;
  dp[103] = true;
  dp[104] = true;
  for(int i=105; i<=x; i++) {
    if(dp[i-100] || dp[i-101] || dp[i-102] || dp[i-103] || dp[i-104] || dp[i-105]) {
      dp[i] = true;
    }
  }
  if(dp[x]) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}