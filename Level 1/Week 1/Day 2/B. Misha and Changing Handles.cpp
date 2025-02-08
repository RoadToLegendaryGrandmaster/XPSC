// Problem: B. Misha and Changing Handles
// Link: https://codeforces.com/problemset/problem/501/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int q; cin >> q;
    map<string, string> res, present;

    while(q--) {
        string s1, s2; cin >> s1 >> s2;
        if(present.find(s1) != present.end()) {
            string s = present[s1];
            res[s] = s2;
            present.erase(s1);
            present[s2] = s;
        }
        else {
            res[s1] = s2;
            present[s2] = s1;
        }
    }

    cout << res.size() << '\n';
    for(auto [a, b]: res) {
        cout << a << ' ' << b << '\n';
    }
    

    return 0;
}