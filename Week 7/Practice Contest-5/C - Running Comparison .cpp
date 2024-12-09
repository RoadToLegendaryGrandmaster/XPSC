// problem name: C - Running Comparison
// problem link: https://vjudge.net/contest/678599#problem/C 

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int ans = 0;
        for(int i = 0; i < n; i++) {
            bool f = (a[i] <= b[i] + b[i]) && (b[i] <= a[i] + a[i]); 
            if(f) ans++;
        }

        cout << ans << '\n';
    }
     
    return 0;
}
