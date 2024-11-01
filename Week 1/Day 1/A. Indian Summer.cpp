// Problem: A. Indian Summer
// Link: https://codeforces.com/contest/44/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;
    map<pair<string, string>, bool> mp;

    for(int i = 0; i < n; i++) {
        string s1, s2; cin >> s1 >> s2;
        mp[{s1, s2}] = true;
    }

    cout << mp.size() << '\n';
    
    return 0;
}