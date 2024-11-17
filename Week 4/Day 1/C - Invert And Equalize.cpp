// Problem Name: C - Invert And Equalize
// Problem link: https://vjudge.net/contest/672779#problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        if(s.size() == 1) {
            cout << 0 << '\n';
            continue;
        }

        int o = 0; 
        int z = 0;
        for(int i = 1; i < n; i++) {
            if(s[i - 1] == '1' && s[i] == '0') {
                o++;
            }
            else if(s[i - 1] == '0' && s[i] == '1') {
                z++;
            }
        }

        (s[n - 1] == '1') ? o++ : z++;

        cout << min(o, z) << '\n';
    }    
    
    return 0;
}
