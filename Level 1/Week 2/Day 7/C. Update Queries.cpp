// Problem name: C. Update Queries
// Problem link: https://codeforces.com/problemset/problem/1986/C
#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        string s; cin >> s;
        set<int> st;

        for(int i = 0; i < m; i++) {
            int a; cin >> a;
            st.insert(a);
        }

        string c; cin >> c;
        sort(c.begin(), c.end());

        int i = 0;
        for(auto& x: st) {
            s[x - 1] = c[i];
            i++;
        }

        cout << s << '\n';
    }

    return 0;
}