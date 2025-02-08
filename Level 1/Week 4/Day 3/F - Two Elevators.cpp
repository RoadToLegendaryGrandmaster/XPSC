// Problem Name: F - Two Elevators
// Problem link: https://vjudge.net/contest/672779#problem/F
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int a, b, c; cin >> a >> b >> c;
        int x = a - 1;
        int y = abs(b - c) + abs(c - 1);
        
        if(x < y) {
            cout << 1 << '\n';
        }
        else if(x > y) {
            cout << 2 << '\n';
        }
        else {
            cout << 3 << '\n';
        }
    }
    
    return 0;
}