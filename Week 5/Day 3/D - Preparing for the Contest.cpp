// Problem Name: D - Preparing for the Contest
// Problem link: https://vjudge.net/contest/674807#problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k; 
        vector<int> v;
        for(int i = 1; i <= n; i++) {
            v.push_back(i);
        }

        sort(v.begin(), v.begin() + n - k, greater<int>());

        for(int i = 0; i < n; i++) {
            cout << v[i] << ' ';
        }

        cout << '\n';
    }

    
    return 0;
}