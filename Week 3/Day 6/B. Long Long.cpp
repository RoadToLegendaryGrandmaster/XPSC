// Problem Name: B. Long Long
// Problem link: https://codeforces.com/problemset/problem/1843/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v;
        long long sm = 0;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            v.push_back(a);
            sm += abs(a);
        }

        int cnt = 0;

        bool st = false;
        for(int i = 0; i < n; i++) {
            if(v[i] < 0) {
                st = true;
                continue;
            }

            if(st) {
                if(v[i] > 0) {
                    st = false;
                    cnt++;
                }
            }
        }

        if(st) cnt++;

        cout << sm << ' ' << cnt << '\n';
    }    
    
    return 0;
}