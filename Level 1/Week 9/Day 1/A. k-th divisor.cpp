// Problem name: A. k-th divisor
// Problem link: https://codeforces.com/problemset/problem/762/A
#include <bits/stdc++.h>

using namespace std;

vector<long long> divisors(long long n) {
    vector<long long> v;
    for(long long i = 1; 1LL * i * i <= n; i++) {
        if(n % i == 0) {
            v.push_back(i);
            if(n / i != i) {
                v.push_back(n / i);
            }
        }
    }

    sort(v.begin(), v.end());
    return v;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    long long n, k; cin >> n >> k;
    vector<long long> v = divisors(n);

    if(v.size() >= k) {
        cout << v[k - 1] << '\n';
    }
    else {
        cout << -1 << '\n';
    }
    
     
    return 0;
}
