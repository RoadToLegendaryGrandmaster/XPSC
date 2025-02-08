// Problem name: D - Grandma Capa Knits a Scarf
// Problem link: https://vjudge.net/contest/679642#problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        int mn = INT_MAX;
        for(char i = 'a'; i <= 'z'; i++) {
            int l = 0;
            int r = n - 1;
            int cnt = 0;
            while(l < r) {
                if(s[l] == s[r]) {
                    l++;
                    r--;
                }
                else {
                    if(s[l] == i) {
                        cnt++;
                        l++;
                    }
                    else if(s[r] == i) {
                        cnt++;
                        r--;
                    }
                    else {
                        cnt = INT_MAX;
                        break;
                    }
                }
            }

            mn = min(mn, cnt);
        }

        if(mn == INT_MAX) {
            cout << -1 << '\n';
        }
        else {
            cout << mn << '\n';
        }
    }
      
    return 0;
}
