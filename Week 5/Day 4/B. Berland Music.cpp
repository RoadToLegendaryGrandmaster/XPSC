// Intro: B. Berland Music
// Problem link: https://codeforces.com/problemset/problem/1622/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            v.push_back(a);
        }

        string s; cin >> s;

        vector<pair<long long, long long>> x, y;
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') {
                x.push_back({v[i], i + 1});
            }
            else {
                y.push_back({v[i], i + 1});
            }
        }

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        vector<long long> ans(n + 1);
        int cnt = 1;
        for(int i = 0; i < x.size(); i++) {
            auto& [a, b] = x[i];
            ans[b] = cnt++;
        }

        for(int i = 0; i < y.size(); i++) {
            auto& [a, b] = y[i];
            ans[b] = cnt++;
        }

        for(int i = 1; i <= n; i++) {
            cout << ans[i] << ' ';
        }

        cout << '\n';
    }   
     
    return 0;
}