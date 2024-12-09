// problem name: B. Petr and a Combination Lock
// problem link: https://codeforces.com/problemset/problem/1097/B

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool ans = false;
    for(int i = 0; i < (1 << n); i++) {
        int sm = 0;
        for(int k = 0; k < n; k++) {
            if((i >> k) & 1) {
                sm += arr[k];
            }
            else {
                sm -= arr[k];
            }
        }

        sm = ((sm % 360 ) + 360) % 360;
        if(sm == 0) {
            ans = true;
            break;
        }
    }

    if(ans) cout << "YES" << '\n';
    else cout << "NO" << '\n';
     
    return 0;
}
