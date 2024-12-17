// Problem name: K - Bazoka and Mocha's Array
// Problem link: https://vjudge.net/contest/679642#problem/K
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        deque<int> dq;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            dq.push_back(a);
        }

        bool ans = false;
        for(int i = 0; i < n; i++) {
            if(is_sorted(dq.begin(), dq.end())) {
                ans = true;
                break;
            }

            dq.push_back(dq.front());
            dq.pop_front();
        }

        if(ans) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
     
    return 0;
}
