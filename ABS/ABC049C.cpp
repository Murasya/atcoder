#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string w1 = "dream", w2 = "dreamer", w3 = "erase", w4 = "eraser";
  size_t p;
  while(string::npos != (p = s.find(w4))) {
    s.replace(p, w4.length(), ".");
  }
  while(string::npos != (p = s.find(w3))) {
    s.replace(p, w3.length(), ".");
  }
  while(string::npos != (p = s.find(w2))) {
    s.replace(p, w2.length(), ".");
  }
  while(string::npos != (p = s.find(w1))) {
    s.replace(p, w1.length(), ".");
  }
  while(string::npos != (p = s.find("."))) {
    s.replace(p, 1, "");
  }
  if(s.size() == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}