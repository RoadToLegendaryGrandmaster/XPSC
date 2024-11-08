// Problem Name: C. Traffic Light
// Problem link: https://codeforces.com/contest/1744/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        char c; cin >> c;
        string s; cin >> s;

        s = s + s;
            
        int g = s.size() - 1;
        for(int i = s.size() - 1; i >= n; i--) {
            if(s[i] == 'g') {
                g = i;
            }
        }

        int dis = 0;
        for(int i = n - 1; i >= 0; i--) {
            if(s[i] == 'g') g = i;
            if(s[i] == c) {
                dis = max(dis, g - i);
            }
        }

        cout << dis << '\n';
    }    
    
    return 0;
}