// Problem Name: B - Range Minimize
// Problem link: https://vjudge.net/contest/670883#problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        for(auto& x : v) cin >> x;

        sort(v.begin(), v.end());

        int a = v[n - 3] - v[0];
        int b = v[n - 1] - v[2];
        int c = v[n - 2] - v[1];

        cout << min({a, b, c}) << '\n';
    }
    
    return 0;
}