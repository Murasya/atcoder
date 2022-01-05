#include<bits/stdc++.h>
using namespace std;
int main() {
    long long a, b,c,d;
    cin >> a >> b >> c >> d;
    long long ans=LONG_LONG_MIN;
    ans = max(a*c, ans);
    ans = max(a*d, ans);
    ans = max(b*c, ans);
    ans = max(b*d, ans);
    cout << ans << endl;
}