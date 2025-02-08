// Problem Name: C2. Powering the Hero (hard version)
// Problem link: https://codeforces.com/contest/1800/problem/C2
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
                    q.pop();
                }
            }
        }

        cout << sm << '\n';
    }
    
    return 0;
}