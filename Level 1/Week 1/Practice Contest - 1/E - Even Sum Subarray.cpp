// Problem: E - Even Sum Subarray
// Link: https://www.codechef.com/problems/EVENSUMSUB
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v;

        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            v.push_back(a);
        }

        int mx_size = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                int sm = 0;
                for(int k = i; k <= j; k++) {
                    sm += v[k];
                }

                if(sm % 2 == 0) {
                    mx_size = max(mx_size, j - i + 1);
                }
            }
        }

        cout << mx_size << '\n';
    }
    
    return 0;
}