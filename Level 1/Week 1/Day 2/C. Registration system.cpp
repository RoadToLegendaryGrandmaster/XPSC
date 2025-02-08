// Problem: C. Registration system
// Link: https://codeforces.com/contest/4/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;
    map<string, int> mp;

    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        if(mp.find(s) == mp.end()) {
            cout << "OK" << '\n';
        }
        else {
            cout << s << mp[s] << '\n';
        }

        mp[s]++;
    }

    return 0;
}