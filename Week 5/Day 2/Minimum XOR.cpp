// Problem Name: Minimum XOR
// Problem link: https://www.codechef.com/problems/MINMXOR
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n];

        int sm = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            sm = (sm ^ arr[i]);
        }

        int ans = sm;
        for(int i = 0; i < n; i++) {
            ans = min(sm ^ arr[i], ans);
        } 

        cout << ans <<'\n';
    }
    
    return 0;
}