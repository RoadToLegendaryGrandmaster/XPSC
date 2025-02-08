// Problem name: I - Sherlock and his girlfriend
// Problem link: https://vjudge.net/contest/685500#problem/I
#include <bits/stdc++.h>

using namespace std;

const int N = 1e6+9;
bool isPrime[N];

void sieve(int n) {
    for(int i = 3; i <= n; i += 2) {
        isPrime[i] = true;
    }

    for(int i = 3; i * i <= n; i += 2) {
        if(isPrime[i]) {
            for(int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
 
    isPrime[2] = true;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    sieve(100009);
    int n; cin >> n;

    if(n <= 2) {
        cout << 1 << '\n';
    }
    else {
        cout << 2 << '\n';
    }

    for(int i = 1; i <= n; i++) {
        if(isPrime[i + 1]) cout << 1 << ' ';
        else cout << 2 << ' ';
    }

    cout << '\n';
     
    return 0;
}
