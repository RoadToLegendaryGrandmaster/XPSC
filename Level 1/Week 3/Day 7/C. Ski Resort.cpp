// Problem Name: C. Ski Resort
// Problem link: https://codeforces.com/problemset/problem/1840/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, k, q; cin >> n >> k >> q;
        vector<int> v(n);
        for(auto& x : v) cin >> x;

        long long ans = 0;
        long long cur = 0;

        for(int i = 0; i < n; i++) {
            if(v[i] <= q) {
                cur++;
            }
            else {
                cur = 0;
            }

            if(cur >= k) {
                ans += cur - k + 1;
            }
        }

        cout << ans << '\n';
    }    
    
    return 0;
}