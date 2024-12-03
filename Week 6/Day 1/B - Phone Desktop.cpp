// problem name: B - Phone Desktop
// problem link: https://vjudge.net/contest/676796#problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int x, y; cin >> x >> y;

        cout << max(((y + 1) / 2), (x + 4 * y + 14) / 15) << '\n';
    }
     
    return 0;
}