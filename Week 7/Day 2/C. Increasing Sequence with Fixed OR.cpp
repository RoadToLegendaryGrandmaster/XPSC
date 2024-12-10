// problem name: C. Increasing Sequence with Fixed OR
// problem link: https://codeforces.com/problemset/problem/1988/C   

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;

        deque<long long> dq;
        dq.push_back(n);
        for(int i = 0; i <= __lg(n); i++) {
            if((n >> i) & 1) {
                dq.push_front(n - (1LL << i));
            }
        }

        if(dq.front() == 0) dq.pop_front();

        cout << dq.size() << '\n';
        for(auto& x: dq) {
            cout << x << ' ';
        }

        cout << '\n';
    }
     
    return 0;
}
