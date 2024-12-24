// Problem name: C. Joty and Chocolate
// Problem link: https://codeforces.com/contest/678/problem/C
#include <bits/stdc++.h>

using namespace std;

long long LCM(long long a, long long b) {
    return (a / __gcd(a, b)) * b;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    long long n, a, b, p, q; cin >> n >> a >> b >> p >> q;
    long long c1 = n / a * p;
    long long c2 = n / b * q;

    long long c = (n / LCM(a, b));

    long long ans = (c1 + c2) - (c * (p + q)) + (c * max(p, q));

    cout << ans  << '\n';

     
    return 0;
}
