// problem name: E - Almost Prime
// Promple link: https://vjudge.net/contest/685500#problem/E
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;
    int ans = 0;
    
    for(int i = 6; i <= n; i++) {
        map<int, int> cnt;
        int x = i;
        for(int j = 2; j * j <= x; j++) {
            while(x % j == 0) {
                cnt[j]++;
                x /= j;
            }
        }

        if(x > 1) cnt[x]++;

        if(cnt.size() == 2) {
            ans++;
        }
    }
    
    cout << ans << '\n';
    return 0;
}
