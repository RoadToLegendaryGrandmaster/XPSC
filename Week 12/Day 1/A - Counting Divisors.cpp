// problem name: A - Counting Divisors
//Problem link: https://vjudge.net/contest/685500#problem/A
#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 9;
int cnt[N];

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    for(int i = 1; i <= N; i++) {
        for(int j = i; j <= N; j += i) {
            cnt[j]++;
        }
    }

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << cnt[n] << '\n';
    }
     
    return 0;
}
