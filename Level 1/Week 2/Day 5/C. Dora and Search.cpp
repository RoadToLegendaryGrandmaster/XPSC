// Problem Name: C. Dora and Search
// Problem link: https://codeforces.com/contest/1793/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v;
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            v.push_back(a);
            mx = max(mx, a);
            mn = min(mn, a);
        }

        int i = 0;
        int j = n - 1;
        bool ans = false;
        while(i <= j) {
            if(v[i] == mn) {
                i++;
                mn++;
            }
            else if(v[i] == mx) {
                i++;
                mx--;
            }
            else if(v[j] == mn) {
                j--;
                mn++;
            }
            else if(v[j] == mx) {
                j--;
                mx--;
            }
            else {
                ans = true;
                break;
            }
        }

        if(ans) {
            cout << i + 1 << ' ' << j + 1 << '\n';
        }
        else {
            cout << -1 << '\n';
        }
    }
    
    return 0;
}