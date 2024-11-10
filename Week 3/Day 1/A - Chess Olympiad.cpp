// Problem Name: A - Chess Olympiad
// Problem link: https://vjudge.net/contest/670883#problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int a, b, c; cin >> a >> b >> c;

    int m = a + (b * 0.5);
    int e = c + (b * 0.5);

    int t = 4 - (a + b + c);

    if(m + t > e) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
    
    return 0;
}