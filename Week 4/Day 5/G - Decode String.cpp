// Problem Name: G - Decode String
// Problem link: https://vjudge.net/contest/672779#problem/G
#include <bits/stdc++.h>

using namespace std;

char build(int x) {
    return x + 'a' - 1;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        string ans;

        int i = n - 1;
        while(i >= 0) {
            if(s[i] != '0') {
                ans += build(s[i] - '0');
                i--;
            }
            else {
                string tmp = s.substr(i - 2, 2);
                ans += build(stoi(tmp));
                i -= 3;
            }
        }

        reverse(ans.begin(), ans.end());

        cout << ans << '\n';
    }

    return 0;
}