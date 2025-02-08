// Problem Name: D - Payment Without Change
// Problem link: https://vjudge.net/contest/672779#problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        long long a, b, n, s; cin >> a >> b >> n >> s; 
        int d = (s / n);

        if(d > a) {
            d = a;
        }

        if((s - (d * n)) <= b) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    
    return 0;
} 