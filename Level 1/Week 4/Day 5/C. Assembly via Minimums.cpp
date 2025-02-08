// Problem Name: C. Assembly via Minimums
// Problem link: https://codeforces.com/problemset/problem/1857/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int sz = n * (n - 1) / 2;
        vector<int> v(sz);
        for(auto& x: v) cin >> x;

        sort(v.begin(), v.end());

        for(int i = 0; i < sz; i+= --n) {
            cout << v[i] << ' ';
        }

        cout << 1000000000 << '\n';
        cout << '\n';
    }    
    
    return 0;
}