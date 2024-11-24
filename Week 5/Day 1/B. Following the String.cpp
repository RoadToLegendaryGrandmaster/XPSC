// Problem Name: B. Following the String
// Problem link: https://codeforces.com/contest/1927/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        for(auto& x: v) cin >> x;

        map<char, int> mp;
        for(char i = 'a'; i <= 'z'; i++) {
            mp[i] = 0;
        }

        string ans = "";
        for(int i = 0; i < n; i++) {
            for(auto& [a, b]: mp) {
                if(b == v[i]) {
                    ans += a;
                    mp[a]++;
                    break;
                }   
            }
        }

        cout << ans << '\n';
    }    
    
    return 0;
}