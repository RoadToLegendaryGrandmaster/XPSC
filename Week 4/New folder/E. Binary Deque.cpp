// Problem Name: E. Binary Deque
// Problem link: https://codeforces.com/problemset/problem/1692/E
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, s; cin >> n >> s;
        vector<int> v;
        
        int sm = 0;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            v.push_back(a);
            sm += a;
        }   

        if(sm == s) {
            cout << 0 << '\n';
            continue;
        }
        else if(sm < s) {
            cout << -1 << '\n';
            continue;
        }

        int l = 0, r = 0;
        int ans = 0;
        sm = 0;
        while(r < n) {
            sm += v[r];
            
            if(sm == s) {
                ans = max(ans, r - l + 1);
            }
            while(sm > s) {
                sm -= v[l];
                l++;
            }

            r++;
        }

        cout << n - ans << '\n';
    }
    
    return 0;
}