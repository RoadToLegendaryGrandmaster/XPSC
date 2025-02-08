// Problem name: B - Single-use Attack
// Problem link: https://vjudge.net/contest/678599#problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int h, x, y; cin >> h >> x >> y;
        int ans = 1;
        h -= y;

        if(h > 0) {
            if(h % x == 0) {
                ans += (h / x);
            }
            else {
                ans += (h / x) + 1;
            }
        }
       
        cout << ans << '\n';
    }   
     
    return 0;
}
