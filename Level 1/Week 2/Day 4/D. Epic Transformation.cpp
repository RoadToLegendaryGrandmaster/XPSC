// Problem Name: D. Epic Transformation
// Problem link: https://codeforces.com/contest/1506/problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map<int, int> cnt;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            cnt[a]++;
        }

        priority_queue<int> pq;
        for(auto& [a, b]: cnt) {
            pq.push(b);
        }

        while(!pq.empty()) {
            if(pq.size() < 2) break;

            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();

            x--;
            y--;

            if(x > 0) pq.push(x);
            if(y > 0) pq.push(y);
        }

        int ans = 0;
        while(!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }

        cout << ans << '\n';
    }     
    
    return 0;
}