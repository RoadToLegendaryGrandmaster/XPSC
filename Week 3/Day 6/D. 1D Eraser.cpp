// Problem Name: D. 1D Eraser
// Problem link: https://codeforces.com/contest/1873/problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'B') {
                i += k - 1;
                cnt++;
            }
        }

        cout << cnt << '\n';
    }    
    
    return 0;
}
