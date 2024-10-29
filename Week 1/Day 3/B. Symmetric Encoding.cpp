// Problem: B. Symmetric Encoding
// Link: https://codeforces.com/contest/1974/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        map<char, bool> vis;

        string str = "";
        for(int i = 0; i < n; i++) {
            if(vis.find(s[i]) == vis.end()) {
                str += s[i];
                vis[s[i]] = true;
            }
        }

        sort(str.begin(), str.end());

        map<char, char> mp;
        for(int i = 0, j = str.size() - 1; i <= j; i++, j--) {
            mp[str[i]] = str[j];
            mp[str[j]] = str[i];
        }

        for(auto x: s) {
            cout << mp[x];
        }

        cout << '\n';
    }
    
    return 0;
}