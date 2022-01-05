#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  string s;
  cin >> n >> a >> b;
  cin >> s;
  int pass = 0;
  int pass_f = 0;
  for(int i=0; i<n; i++) {
    switch(s[i]) {
      case 'a':
        if(pass < a + b) {
          pass++;
          cout << "Yes" << endl;
        } else {
          cout << "No" << endl;
        }
        break;
      case 'b':
        if(pass < a + b && pass_f < b) {
          pass++;
          pass_f++;
          cout << "Yes" << endl;
        } else {
          cout << "No" << endl;
        }
        break;
      default:
        cout << "No" << endl;
        break;
    }
  }
  return 0;
}