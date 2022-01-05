#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int i=1, sum = 0;
  while(true) {
    sum += i;
    if(sum >= n) break;
    i++;
  }
  cout << i << endl;
  return 0;
}