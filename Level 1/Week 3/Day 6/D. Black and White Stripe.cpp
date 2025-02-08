// Problem Name: D. Black and White Stripe
// Problem link: https://codeforces.com/contest/1690/problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        vector<int> sm(n + 1, 0);
        for(int i = 0; i < n; i++) {
            sm[i + 1] = sm[i] + (s[i] == 'W');
        }


        int ans = INT_MAX;
        for(int i = 0; i + k <= n; i++) {
            ans = min(ans, sm[i + k] - sm[i]);
        }

        cout << ans <<'\n';
    }    
    
    return 0;
}