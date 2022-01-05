#include<bits/stdc++.h>
using namespace std;
#define M 998244353

int n, k;

int main() {
    int lr[10][2];
    cin >> n >> k;
    for(int i=0; i<k; i++) {
        cin >> lr[i][0] >> lr[i][1];
    }

    vector<int> dp(n);
    vector<int> dpsum(n);
    dp[0]=1;
    dpsum[0]=1;

    for(int i=1; i<n; i++) {
        for(int j=0; j<k; j++) {
            int li = i-lr[j][1];
            int ri = i-lr[j][0];
            if(ri<0) continue;
            li = max(li, 0);
            dp[i] += dpsum[ri]-dpsum[li-1];
        }
        dpsum[i] = dpsum[i-1]+dp[i];
    }
    cout << dp[n-1] << endl;
}