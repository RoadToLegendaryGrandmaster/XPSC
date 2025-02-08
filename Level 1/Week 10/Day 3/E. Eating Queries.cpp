// Problem name: E. Eating Queries
// problem link: https://codeforces.com/problemset/problem/1676/E
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        vector<int> v;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            v.push_back(a);
        }

        sort(v.begin(), v.end(), greater<int>());

        vector<long long> p(n);
        p[0] = v[0];
        for(int i = 1; i < n; i++) {
            p[i] = p[i - 1] + v[i];
        }

        while(q--) {
            int x; cin >> x;
            auto lb = lower_bound(p.begin(), p.end(), x);
            
            if(lb == p.end()) {
                cout << -1 << '\n';
            }
            else {
                cout << (lb - p.begin()) + 1 << '\n';
            }   
        }
    }
     
    return 0;
}
