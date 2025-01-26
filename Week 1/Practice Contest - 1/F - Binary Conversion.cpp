// Problem name: F - Binary Conversion
// Problem link: https://vjudge.net/contest/667724#problem/F
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        string s, t; cin >> s >> t;

        int z = 0;
        int zz = 0;
        int o = 0;
        int oo = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] == '1') z++;
            else o++;

            if(t[i] == '1') zz++;
            else oo++;
        }

        if(o != oo && z != zz) {
            cout << "NO" << '\n';
            continue;
        }

        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] != t[i]) cnt++;
        }

        int ans = cnt / 2;

        if(ans == k) {
            cout << "YES" << '\n';
        }
        else if (ans < k) {
            if(o == 1 && z == 1) {
                if(s != t) {
                    if(k % 2 == 0) {
                        cout << "NO" << '\n';
                    }
                    else {
                        cout << "YES" << '\n';
                    }
                }
                else {
                    if(k % 2 != 0) {
                        cout << "NO" << '\n';
                    }
                    else {
                        cout << "YES" << '\n';
                    }
                }
            }
            else {
                if(o > 1 || z > 1) {
                    cout << "YES" << '\n';
                }
                else {
                    cout << "NO" << '\n';
                }
            }
        }
        else {
            cout << "NO" << '\n';
        }
    }
     
    return 0;
}
