// Problem name: C. Fadi and LCM
// Problme link: https://codeforces.com/problemset/problem/1285/C
#include <bits/stdc++.h>

using namespace std;

long long LCM(long long a, long long b) {
    return (a / __gcd(a, b)) * b;
}


int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    long long x; cin >> x;
    long long res = 0;
    for(long long i = 1; i * i <= x; i++) {
        if(x % i == 0 && LCM(i, x / i) == x) {
            res = i;
        }
    }

    cout << res << ' ' << x / res << '\n';

    return 0;
}
