// Problem: C. Word Game
// Link: https://codeforces.com/problemset/problem/1722/C
#include <bits/stdc++.h>

using namespace std;

void input(int n, map<string, bool>& mp, map<string, int>& mp2) {
    for(int i = 0; i < n; i++) {
        string a; cin >> a;
        mp[a] = true;
        mp2[a]++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map<string, bool> m1, m2, m3;
        map<string, int> mp;
        input(n, m1, mp);
        input(n, m2, mp);
        input(n, m3, mp);

        int x = 0, y = 0, z = 0;
        for(auto& [a, b]: mp) {
            if(b == 1) {
                if(m1.find(a) != m1.end()) x += 3;
                if(m2.find(a) != m2.end()) y += 3;
                if(m3.find(a) != m3.end()) z += 3;
            }
            else if(b == 2) {
                if(m1.find(a) != m1.end() && m2.find(a) != m2.end()) {
                    x++;
                    y++;
                }
                else if(m1.find(a) != m1.end() && m3.find(a) != m3.end()) {
                    x++;
                    z++;
                }
                else {
                    y++;
                    z++;
                } 
            }
        }

        cout << x << ' ' << y << ' ' << z << '\n';
    }
    
    return 0;
}