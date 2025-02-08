// Problem Name: C - Make My Array Equal
// Problem link: https://vjudge.net/contest/670883#problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);

        map<int, int> mp;
        for(auto& x: v) {
            cin >> x;
            mp[x]++;
        }

        sort(v.begin(), v.end());

        if(n == 1 || (mp[0] == n)) {
            cout << "YES" << '\n';
            continue;
        }


        if(n == 2) {
            if(mp[0] == 1 && mp[1] == 1) {
                cout << "YES" << '\n';
            }
            else if(v[0] == v[1]){
                cout << "YES" << '\n';
            }
            else {
                cout << "NO" << '\n';
            }

            continue;
        }

        bool ans = true;
        for(int i = 1; i < n; i++) {
            if(v[i - 1] == 0) {
                continue;
            }
            if(v[i] != v[i - 1]) {
                ans = false;
                break;
            }
        }
        
        cout << (ans ? "YES" : "NO") << '\n';
    }     
    
    return 0;
}