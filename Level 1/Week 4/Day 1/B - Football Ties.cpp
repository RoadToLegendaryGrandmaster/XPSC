// Problem Name: B - Football Ties
// Problem link: https://vjudge.net/contest/672779#problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int a, b; cin >> a >> b;
        cout << max(a, b) % 3 << '\n';
    }
    
    return 0;
}