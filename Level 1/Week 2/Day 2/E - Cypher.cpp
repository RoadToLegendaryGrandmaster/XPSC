// Problem Name: E - Cypher
// Problem link: https://vjudge.net/contest/669017#problem/E
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        for(auto&x: v) cin >> x;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            string s; cin >> s;
            for(int j = 0; j < a; j++) {
                if(s[j] == 'D') {
                    if(v[i] == 9) {
                        v[i] = 0;
                    }
                    else {
                        v[i]++;
                    }
                }
                else {
                    if(v[i] == 0) {
                        v[i] = 9;
                    }
                    else {
                        v[i]--;
                    }
                }
            }
        }

        for(auto&x: v) {
            cout << x << ' ';
        }
        cout << '\n';
    }
    

    return 0;
}