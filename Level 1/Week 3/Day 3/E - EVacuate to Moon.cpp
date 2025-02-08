// Problem Name: E - EVacuate to Moon
// Problem link: https://vjudge.net/contest/670883#problem/E
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, m, h; cin >> n >> m >> h;
        vector<int> a(n), b(m); 

        for(auto& x: a) cin >> x;
        for(auto& x: b) cin >> x;

        sort(b.begin(), b.end(), greater<int>());
        sort(a.begin(), a.end(), greater<int>());

        long long ans = 0;
        int j = 0;
        for(int i = 0; i < min(m, n); i++) {
            ans += min(1LL * a[i], 1LL * b[i] * h);
        }

        cout << ans << '\n';
    }    
    
    return 0;
}