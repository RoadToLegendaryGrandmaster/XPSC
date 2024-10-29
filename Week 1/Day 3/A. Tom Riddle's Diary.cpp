// Problem: A. Tom Riddle's Diary
// Link: https://codeforces.com/contest/855/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;
    map<string, bool> mp;

    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        if(mp.find(s) != mp.end()) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
            mp[s] = true;
        }
    }

    
    return 0;
}