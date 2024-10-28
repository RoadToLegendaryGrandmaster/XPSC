// Problem: B. Radio Station
// Link: https://codeforces.com/contest/918/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n, m; cin >> n >> m;
    map<string, string> mp;

    for(int i = 0; i < n; i++) {
        string a, b; cin >> a >> b;
        mp[b] = a;
    }

    while(m--) {
        string a, b; cin >> a >> b;
        cout << a << ' ' << b << ' ';
        b.pop_back();
        cout << '#' << mp[b] << '\n';
    }
    
    return 0;
}