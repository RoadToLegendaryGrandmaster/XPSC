// Problem Name: C. Train and Queries
// Problem link: https://codeforces.com/problemset/problem/1702/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        map<int, set<int>> mp;
        for(int i = 1; i <= n; i++) {
            int a; cin >> a;
            mp[a].insert(i);
        }

        while(k--) {
            int a, b; cin >> a >> b;
            if(mp.find(a) == mp.end() || mp.find(b) == mp.end()) {
                cout << "NO" << '\n';
            }
            else {
                int l = *mp[a].begin();
                int r = *mp[b].rbegin();
                if(l < r) {
                    cout << "YES" << '\n';
                }
                else {
                    cout << "NO" << '\n';
                }
            }
        }
    }
    
    return 0;
}