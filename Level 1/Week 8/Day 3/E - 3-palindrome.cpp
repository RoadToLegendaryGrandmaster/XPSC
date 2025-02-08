// Problem name: E - 3-palindrome
// Problem link: https://vjudge.net/contest/679642#problem/E
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;

    string s = "";

    for(int i = 0; i < n / 4 + 1; i++) {
        s += "abba";
    }

    for(int i = 0; i < n; i++) {
        cout << s[i];
    }
     
    cout << '\n';

    return 0;
}
