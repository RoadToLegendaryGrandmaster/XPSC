// Problem Name: G - Compare T-Shirt Sizes
// Problem link: https://vjudge.net/contest/670883#problem/G
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    map<char, int> mp;
    
    mp['X'] = 1; 
    mp['S'] = 1; 
    mp['M'] = 2; 
    mp['L'] = 3;

    while(t--) {
        string a, b; cin >> a >> b;

        int x = mp[a.back()];
        int y = mp[b.back()];

        for(int i = 0; i < a.size() - 1; i++) {
            if(a.back() == 'S') {
                x -= mp[a[i]];
            }
            else {
                x += mp[a[i]];
            }
        }

        for(int i = 0; i < b.size() - 1; i++) {
            if(b.back() == 'S') {
                y -= mp[b[i]];
            }
            else {
                y += mp[b[i]];
            }
        }

        if(x == y) {
            cout << '=' << '\n';
        }
        else if(x < y) {
            cout << '<' << '\n';
        }
        else {
            cout << '>' << '\n';
        }
    }

    
    return 0;
}