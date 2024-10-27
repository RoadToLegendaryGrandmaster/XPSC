// Problem: A. Sereja and Dima
// Link: https://codeforces.com/contest/381/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int n; cin >> n;
    deque<int> dq;

    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        dq.push_back(a);
    }

    int s = 0;
    int d = 0;

    int i = 0;
    while(!dq.empty()) {
        if(i % 2 == 0) {
            if(dq.front() > dq.back()) {
                s += dq.front();
                dq.pop_front();
            }
            else {
                s += dq.back();
                dq.pop_back();
            }
        }
        else {
            if(dq.front() > dq.back()) {
                d += dq.front();
                dq.pop_front();
            }
            else {
                d += dq.back();
                dq.pop_back();
            }
        }

        i++;
    }
    
    cout << s << ' ' << d << '\n';

    return 0;
}