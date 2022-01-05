#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int n,m,c;
  cin >> n>>m>>c;
  vector<int> b(m);
  for(int i=0; i<m; i++) {
    cin >> b[i];
  }
  int count = 0;
  for(int i=0; i<n; i++) {
    int a_sum=0;
    for(int j=0; j<m; j++) {
      int a;
      cin >> a;
      a_sum += a*b[j];
    }
    if(a_sum + c > 0) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}