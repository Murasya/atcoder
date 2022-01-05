#include<bits/stdc++.h>
#include<atcoder/maxflow>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> grid(n);
  for(int i=0; i<n; i++) {
    cin >> grid[i];
  }
  atcoder::mf_graph<int> g(n*m);
  
  return 0;
}