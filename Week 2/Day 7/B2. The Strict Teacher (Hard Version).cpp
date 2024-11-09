// Problem Name: B2. The Strict Teacher (Hard Version)
// Problem link: https://codeforces.com/problemset/problem/2005/B2
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t; 
    while(t--) {
        int n, m, q; cin >> n >> m >> q;
        vector<int> v;

        for(int i = 0; i < m; i++) {
            int a; cin >> a;
            v.push_back(a);
        }

        sort(v.begin(), v.end());

        while(q--) {
            int d; cin >> d;
            int lb = lower_bound(v.begin(), v.end(), d) - v.begin();
            
            if(lb == 0) {
                cout << v[0] - 1 << '\n';
            }
            else if(lb == m) {
                cout << n - v[lb - 1] << '\n';
            }
            else {
                cout << (v[lb] - v[lb - 1]) / 2 << '\n';
            }
        } 
    }    
    
    return 0;
}