// Problem Name:  C - Tricky Template
// Problem link: https://vjudge.net/contest/674807#problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string a, b, c; cin >> a >> b >> c;
        
        bool x = false;
        for(int i = 0; i < n; i++) {
            if(a[i] != c[i] && b[i] != c[i]) {
                x = true;
            }
        }

        if(x) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    
    
    return 0;
}