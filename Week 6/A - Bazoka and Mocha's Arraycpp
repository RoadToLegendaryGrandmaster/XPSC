// Problem Name: A - Bazoka and Mocha's Array
// Problem Link: https://vjudge.net/contest/676796#problem/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        deque<int> dq;

        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            dq.push_back(a);
        }

        bool ans = false;
        for(int i = 0; i < n; i++) {
            ans |= is_sorted(dq.begin(), dq.end());
            int a = dq.front();
            dq.pop_front();
            dq.push_back(a);
        }

        if(ans) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
     
    return 0;
}