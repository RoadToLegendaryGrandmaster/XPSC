// Problem Name: A. We Need the Zero
// Problem link: https://codeforces.com/problemset/problem/1805/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> b;
        int sm = 0;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            sm = sm ^ a;
        }

        if(n % 2 == 1) {
            cout << sm << '\n';
        }
        else {
            if(sm != 0) {
                cout << -1 << '\n';
            }
            else {
                cout << sm << '\n';
            }
        }
    }    
    
    return 0;
}