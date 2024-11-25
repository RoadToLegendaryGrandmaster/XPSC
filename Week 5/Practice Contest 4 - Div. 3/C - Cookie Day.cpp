// Problem Name: C - Cookie Day
// Problem link: https://vjudge.net/contest/675228#problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        
        vector<int> v;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            v.push_back(a);
        }

        sort(v.rbegin(), v.rend());

        if(v[0] < k) {
            cout << -1 << '\n';
            continue;
        }

        int ans = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(v[i] >= k) {
                int c = v[i] % k;
                ans = min(ans, c);
            }
        }

        cout << ans << '\n';
    }
    
    return 0;
}