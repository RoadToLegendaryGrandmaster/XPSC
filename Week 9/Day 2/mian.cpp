#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++) cin >> a[i];

        bool f = false;
        for(int i = 0; i < n; i++) {
            bool ans = true;
            vector<int> v;
            long long k = a[i];
            for(int j = 0; j < n; j++) {
                if(a[j] % k == 0) {
                    v.push_back(1);
                }
                else {
                    v.push_back(0);
                }
            }

            for(int j = 1; j < v.size(); j++) {
                if(v[j] == v[j - 1]) {
                    ans = false;
                    break;
                }
            }

            if(ans) {
                cout << k << '\n';
                f = true;
                break;
            }
        }

        if(!f) {
            cout << 0 << '\n';
        }
    }
     
    return 0;
}
