#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, j, k) for (int i = j; i < k; i++)
#define rrep(i, j, k) for (int i = j; i >= k; i--)
#define p(s) cout << s << endl
#define show_array(a) \
  for (auto i : a) p(i)
#define INF 1001001001
#define PII pair<int, int>
#define Graph vector<vector<int>>
#define chmin(a, b) a = min(a, b)
#define chmax(a, b) a = max(a, b)

int N;

vector<string> rot(vector<string> s) {
  vector<string> ans;
  rep(i, 0, N) {
    string str = "";
    rep(j, 0, N) { str += s[j][N - i - 1]; }
    ans.push_back(str);
  }
  rep(i, 0, N) { p(ans[i]); }
  return ans;
}

pair<int, int> left_top(vector<string> s) {
  rep(i, 0, N) {
    rep(j, 0, N) {
      if (s[i][j] == '#') {
        return {i, j};
      }
    }
  }
  return {0, 0};
}

bool same(vector<string> s, vector<string> t) {
  auto si = left_top(s);
  auto ti = left_top(t);
  int offseti = ti.first - si.first;
  int offsetj = ti.second - si.second;
  rep(i, 0, N) {
    rep(j, 0, N) {
      int ii = offseti + i;
      int jj = offsetj + j;
      if (0 <= ii && ii < N && 0 <= jj && jj < N) {
        if (s[i][j] != t[ii][jj]) return false;
      } else {
        if (s[i][j] == '#') return false;
      }
    }
  }
  return true;
}

int main() {
  cin >> N;
  vector<string> s(N), t(N);
  rep(i, 0, N) { cin >> s[i]; }
  rep(i, 0, N) { cin >> t[i]; }

  rep(i, 0, 4) {
    if (same(s, t)) {
      p("Yes");
      return 0;
    }
    s = rot(s);
  }
  p("No");
  return 0;
}