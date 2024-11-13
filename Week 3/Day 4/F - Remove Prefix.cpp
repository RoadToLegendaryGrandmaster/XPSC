// Problem Name: F - Remove Prefix
// Problem link: https://vjudge.net/contest/670883#problem/F
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<int, int> mp;
        int pos = -1;
        for(int i = n - 1; i >= 0; i--) {
            if(mp.find(a[i]) == mp.end()) {
                mp[a[i]]++;
            }
            else {
                pos = i;
                break;
            }
        }

        cout << pos + 1 << '\n';
    }    
    
    return 0;
}