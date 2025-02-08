// Problem name: B. Fun Game
// Problem link: https://codeforces.com/problemset/problem/1994/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        string s, t; cin >> s >> t;

        if(s == t || s[0] == '1') {
            cout << "YES" << '\n';
            continue;
        }

        int pos = -1;

        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                pos = i;
                break;
            }
        }

        if(pos == -1) {
            cout << "NO" << '\n';
            continue;
        }

        bool f = true;
        for(int i = 0; i < n; i++) {
            if(s[i] != t[i]) {
                if(pos > i) {
                    f = false;
                    break;
                }   
            }
        }

        if(f) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
     
    return 0;
}
