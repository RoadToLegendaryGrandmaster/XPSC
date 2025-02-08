// problem name: A - Cricket Tournament 
// problem link: https://vjudge.net/contest/678599#problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        if(n - 1 >= m) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
     
    return 0;
}

