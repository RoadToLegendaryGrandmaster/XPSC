// Problem name: B - Divide and Equalize
// Problem link: https://vjudge.net/contest/685500#problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        map<int, int> cnt;
        for(int i = 0; i < n; i++) {
            for(int j = 2; j * j <= v[i]; j++) {
                while(v[i] % j == 0) {
                    cnt[j]++;
                    v[i] /= j;
                }
            }

            if(v[i] > 1) cnt[v[i]]++;
        }

        bool f = true;
        for(auto& [a, b]: cnt) {
            if(b % n != 0) {
                f = false;
                break;
            }
        }

        if(f) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
     
    return 0;
}
