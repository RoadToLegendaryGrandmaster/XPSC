// Problem Name: G - Chemistry
// Problem link: https://vjudge.net/contest/669017#problem/G
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        map<char, int> mp;
        string s; cin >> s;

        for(auto& c: s) {
            mp[c]++;
        }

        int odd = 0;
        for(auto& [a, b]: mp) {
            if(b % 2 == 1) odd++;
        }

        if(odd - 1 > k) {
            cout << "NO" << '\n';
        }
        else {
            cout << "YES" << '\n';
        }
    }
    
    return 0;
}