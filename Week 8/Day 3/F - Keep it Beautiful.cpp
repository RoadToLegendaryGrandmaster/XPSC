// Problem name: F - Keep it Beautiful
// Problem link: https://vjudge.net/contest/679642#problem/F
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v;
        int f = false;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            if(v.empty()) {
                v.push_back(a);
                cout << 1;
            }
            else if(!f && v.back() <= a) {
                cout << 1;
                v.push_back(a);
            }
            else if((!f && v[0] >= a)) {
                f = true;
                v.push_back(a);
                cout << 1;
            }
            else if(f && v.back() <= a && v[0] >= a) {
                f = true;
                v.push_back(a);
                cout << 1;
            }
            else {
                cout << 0;
            }
        }

        cout << '\n';
    }
     
    return 0;
}
