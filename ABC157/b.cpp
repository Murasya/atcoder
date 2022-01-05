#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  vector<vector<int>> a(3, vector<int>(3));
  vector<vector<bool>> ab(3, vector<bool>(3, false));
  for(int i=0; i<3; i++) {
    for(int j=0; j<3; j++) {
      cin >> a[i][j];
    }
  }
  int n;
  cin >> n;
  int b;
  for(int l=0; l<n; l++) {
    cin >> b;
    for(int i=0; i<3; i++) {
      for(int j=0; j<3; j++) {
        if(a[i][j] == b) {
          ab[i][j] = true;
        }
      }
    }
  }
  int num;
  for(int i=0; i<3; i++) {
    num=0;
    for(int j=0; j<3; j++) {
      if(ab[i][j]) {
        num++;
      }
    }
    if(num == 3) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  for(int i=0; i<3; i++) {
    num=0;
    for(int j=0; j<3; j++) {
      if(ab[j][i]) {
        num++;
      }
    }
    if(num == 3) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  num=0;
  for(int i=0; i<3; i++) {
    if(ab[i][i]) {
      num++;
    }
  }
  if(num == 3) {
    cout << "Yes" << endl;
    return 0;
  }
  num=0;
  for(int i=0; i<3; i++) {
    if(ab[i][2-i]) {
      num++;
    }
  }
  if(num==3) {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}