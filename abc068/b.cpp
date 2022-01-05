#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> bai = {1,2,4,8,16,32,64};
  int ans = 0;
  for(int i=0; i<bai.size(); i++) {
    if(bai[i] <= n) {
      ans = bai[i];
    }
  }
  cout << ans << endl;
  return 0;
}