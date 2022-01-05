#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int n, m;
  cin >> n >> m;
  if(n == 1 && m == 0) {
    cout << 0 << endl;
    return 0;
  }
  string num="";
  for(int i=0; i<n; i++) {
    num.push_back('.');
  }
  for(int i=0; i<m; i++) {
    int s;
    char c;
    cin >> s >> c;
    if(num[s-1] == '.' || num[s-1] == c) {
      num[s-1] = c;
    } else {
      cout << "-1" << endl;
      return 0;
    }
  }
  if(num[0] == '0' && num.size() != 1) {
    cout << "-1" << endl;
    return 0;
  } else if(num[0] == '.'){
    num[0] = '1';
  }
  size_t p;
  while((p = num.find('.')) != string::npos) {
    num.replace(p, 1, "0");
  }
  cout << num << endl;
  return 0;
}