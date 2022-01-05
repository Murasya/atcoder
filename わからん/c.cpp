#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    for(int a=1; a<n; a++) {
        for(int b=1; b<n; b++) {
            if(a*b<n) ans++;
            else break;
        }
    }
    cout << ans << endl;
}