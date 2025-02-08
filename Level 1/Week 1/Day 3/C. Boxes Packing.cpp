// Problem: C. Boxes Packing
// Link: https://codeforces.com/contest/903/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;

    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        mp[a]++;
    }

    int ans = INT_MIN;
    for(auto& [a, b]: mp) {
        ans = max(ans, b);
    }

    cout << ans << '\n';

    return 0;
}
