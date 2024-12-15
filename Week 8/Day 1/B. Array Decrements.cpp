// Problem name: B. Array Decrements
// Problem link: https://codeforces.com/problemset/problem/1690/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        int c = INT_MIN;
        int d = INT_MAX;

        bool f = true;
        for(int i = 0; i < n; i++) {
            if(b[i] > a[i]) f = false;
            if(b[i] == 0) {
                c = max(c, a[i] - b[i]);
            }
            else {
                c = max(c, a[i] - b[i]);
                d = min(d, a[i] - b[i]);
            }
        }

        if(c <= d && f) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }

     
    return 0;
}
