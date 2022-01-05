#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i,j,k) for(int i=j; i<k; i++)
#define RREP(i,j,k) for(int i=j; i>=k; i--)
#define show_array(a) for(auto i: a) {cout << i << endl;}
#define INF 1000000000
#define PII pair<int,int>
#define Graph vector<vector<int>>

vector<bool> visited;
map<int,bool> color;
void dfs(const Graph &G, int v) {
  visited[v] = true;
  for(auto nv: G[v]) {
    if(visited[nv]) continue;
    color[nv] = !color[v];
    dfs(G, nv);
  }
}

int main() {
  int n,q;
  cin >> n >> q;
  vector<int> a(n-1), b(n-1), c(q), d(q);
  Graph G(n+1);
  REP(i,0,n-1) {
    cin >> a[i] >> b[i];
    G[a[i]].push_back(b[i]);
    G[b[i]].push_back(a[i]);
  }
  REP(i,0,q) {
    cin >> c[i] >> d[i];
  }
  color[1] = true;
  visited.assign(n+1,false);
  dfs(G,1);
  REP(i,0,q) {
    if(color[c[i]] != color[d[i]]) {
      puts("Road");
    } else {
      puts("Town");
    }
  }
  return 0;
}