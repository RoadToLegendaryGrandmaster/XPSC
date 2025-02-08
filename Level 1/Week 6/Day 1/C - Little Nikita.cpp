// problem name: C - Little Nikita
// problem link: https://vjudge.net/contest/676796#problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        if(n < m) {
            cout << "NO" << '\n';
            continue;
        }
        int rem = m - n;

        if(rem % 2 == 0) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
     
    return 0;
}