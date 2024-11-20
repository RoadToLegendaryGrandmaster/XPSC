// Problem Name: E - Jellyfish and Undertale
// Problem link: https://vjudge.net/contest/672779#problem/E
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int a, b, n; cin >> a >> b >> n;
        vector<int> v;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            v.push_back(x);
        }

        sort(v.rbegin(), v.rend());

        long long cnt = b;
        for(auto &x : v) {
            cnt += min(a - 1, x);
        }

        cout << cnt <<'\n';
    }
    
    return 0;
}