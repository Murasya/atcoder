#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, j, k) for (int i = j; i < k; i++)
#define RREP(i, j, k) for (int i = j; i >= k; i--)
#define show_array(a)  \
  for (auto i : a) {   \
    cout << i << endl; \
  }
#define INF 1001001001
#define PII pair<int, int>
#define Graph vector<vector<int>>
#define chmin(a, b) a = min(a, b)
#define chmax(a, b) a = max(a, b)

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> S(h);
  REP(i, 0, h) { cin >> S[i]; }
  deque<PII> q;
  q.push_back({0, 0});
  vector<vector<int>> cost(h, vector<int>(w, INF));
  cost[0][0] = 0;
  int d[5] = {-1, 0, 1, 0, -1};
  while (!q.empty()) {
    PII v = q.front();
    int x = v.first;
    int y = v.second;
    q.pop_front();
    for (int i = 0; i < 4; i++) {
      int nx = min(max(0, x + d[i]), w);
      int ny = min(max(0, y + d[i + 1]), h);
      if (cost[ny][nx] != INF) continue;
      if (S[y][x] == '.') {
        cost[ny][nx] = cost[y][x];
        q.push_front({nx, ny});
      } else {
        cout << "aaa" << endl;
        cost[ny][nx] = cost[y][x] + 1;
        cout << "bbb" << endl;
        REP(j, -2, 3) {
          REP(k, -2, 3) {
            if ((j == -2 && k == -2) || (j == -2 && k == 2) ||
                (j == 2 && k == -2) || (j == 2 && k == 2)) {
            } else {
              if ((y + j >= 0) && (y + j < h) && (x + k >= 0) && (x + k < w)) {
                S[y + j][x + k] = '.';
              }
            }
          }
        }
        q.push_back({nx, ny});
      }
    }
  }
  return 0;
}