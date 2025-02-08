// Problem Name: C1. Powering the Hero (easy version)
// Problem link: https://codeforces.com/problemset/problem/1800/C1
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        for(auto& x: v) cin >> x;

        priority_queue<int> pq;

        long long sm = 0;
        for(int i = 0; i < n; i++) {
            if(v[i] != 0) {
                pq.push(v[i]);
            }
            else {
                if(!pq.empty()) {
                    sm += pq.top();
                    pq.pop();
                }
            }
        }

        cout << sm << '\n';
    }
    
    return 0;
}