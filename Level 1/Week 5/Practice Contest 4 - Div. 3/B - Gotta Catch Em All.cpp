// Problem Name: B - Gotta Catch Em All
// Problem link: https://vjudge.net/contest/675228#problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, x, y; cin >> n >> x >> y;
        int arr[n];

        for(int i = 0; i < n; i++) cin >> arr[i];

        int sm = 0;
        for(int i = 0; i < n; i++) {
            if(x * arr[i] < y) {
                sm += (x * arr[i]);
            }
            else {
                sm += y;
            }
        }

        cout << sm << '\n';
    }
    
    return 0;
}