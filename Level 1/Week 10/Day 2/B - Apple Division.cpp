// Problem name: B - Apple Division
// Problem link: https://vjudge.net/contest/682611#problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v;

    long long sm = 0;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        v.push_back(a);
        sm += a;
    }   

    long long ans = INT_MAX;
    for(int i = 0; i < (1 << n); i++) {
        long long d = 0;
        for(int j = 0; j < n; j++) {
            if((i >> j) & 1) d += v[j];
        }

        long long k = abs((sm - d) - d);
        ans = min(ans, k);
    }

    cout << ans << '\n';
     
    return 0;
}
