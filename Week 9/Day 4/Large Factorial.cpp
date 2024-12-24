// Problem name: Large Factorial
// Problem name: https://www.codechef.com/problems/FUM
#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        long long fact = 1;
        for(int i = 1; i <= n; i++) {
            fact = ((fact * i) % mod);
        }

        cout << fact << '\n';
    }
     
    return 0;
}
