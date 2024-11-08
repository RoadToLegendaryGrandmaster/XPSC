// Problem Name: C. Numbers on Whiteboard
// Problem link: https://codeforces.com/problemset/problem/1430/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        priority_queue<int> numbs;
        for(int i = 1; i <= n; i += 2) {
            numbs.push(i);
            if(i + 1 <= n) numbs.push(i + 1);
        }

        vector<pair<int, int>> vp;

        for(int i = 0; i < n - 1; i++) {
            int a = numbs.top(); numbs.pop();
            int b = numbs.top(); numbs.pop();
            
            vp.push_back({a, b});

            int c = round((a + b) / 2.0);
            
            numbs.push(c);
        }

        cout << numbs.top() << '\n';
        for(auto& [a, b]: vp) {
            cout << a << ' ' << b << '\n';
        }
 
    }    
    
    return 0;
}