// Problem name: NASA
// Problem link: https://www.codechef.com/problems/PALIXOR
#include <bits/stdc++.h>

using namespace std;

const int N = (1 << 15);

vector<int> palindrome;

bool is_palindrome(int n) {
    string s = to_string(n);
    int sz = s.size();
    for(int i = 0; i < sz / 2; i++) {
        if(s[i] != s[sz - i - 1]) {
            return false;
        }
    }

    return true;
}

void init_palindrome() {
    for(int i = 0; i < N; i++) {
        if(is_palindrome(i)) {
            palindrome.push_back(i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    init_palindrome();

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n), cnt(N + 1);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }

        long long ans = n;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < palindrome.size(); j++) {
                int curr = (a[i] ^ palindrome[j]); 
                ans += cnt[curr];
            }
        }

        cout << ans / 2 << '\n';
    }
     
    return 0;
}
