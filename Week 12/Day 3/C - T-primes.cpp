// Problem name: C - T-primes
// Problem link: https://vjudge.net/contest/685500#problem/C
#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long n) {
    if(n == 1) return false;
    for(int i = 2; 1LL * i * i <= n; i++) {
        if(n % i == 0) return false;
    }

    return true;
}
    
bool isPerfectSq(long long n) {
    long long x = sqrtl(n);
    return (x * x) == n;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        long long a; cin >> a;
        if(isPerfectSq(a) && isPrime(sqrtl(a))) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    } 
     
    return 0;
}
