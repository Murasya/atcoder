#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    int d1,d2;
    cin >> N;
    int count=0;
    bool f=false;
    for(int i=0; i<N; i++) {
        cin >> d1 >> d2;
        if(d1 == d2) {
            count++;
        } else {
            count = 0;
        }
        if(count >= 3) {
            f=true;
            break;
        }

    }
    if(f)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}