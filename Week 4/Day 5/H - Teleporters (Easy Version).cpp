// Problem Name: H - Teleporters (Easy Version)
// Problem link: https://vjudge.net/contest/672779#problem/H
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n, c; cin >> n >> c;
        priority_queue<int, vector<int>, greater<int>> q;
        for(int i = 1; i <= n; i++) {
            int a; cin >> a;
            q.push(a + i);
        }
        
        int cnt = 0;
        while(!q.empty()) {
            int d = q.top();
            q.pop();
            
            if(d > c) break;
            cnt++;
            c -= d;
        }
        
        cout << cnt << '\n';
    }

    return 0;
}