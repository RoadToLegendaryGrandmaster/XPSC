// Problem Name: F - Colourblindness
// Problem link: https://vjudge.net/contest/669017#problem/F
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string a, b; cin >> a >> b;
        vector<int> r1, r2;

        for(int i = 0; i < n; i++) {
            if(a[i] == 'R') r1.push_back(i);
            if(b[i] == 'R') r2.push_back(i);
        }

        if(r1.size() != r2.size()) {
            cout << "NO" << '\n';
            continue;
        }

        bool ans = true;
        for(int i = 0; i < r1.size(); i++) {
            if(r1[i] != r2[i]) {
                cout << "NO" << '\n';
                ans = false;
                break;
            }
        }

        if(ans) cout << "YES" << '\n';
    }
    
    return 0;
}