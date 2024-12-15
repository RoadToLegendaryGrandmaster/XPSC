// Problem name: A - String Game
// Problem link: https://vjudge.net/contest/679642#problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int z = 0, o = 0;

        for(auto& x : s) {
            if(x == '1') o++;
            else z++;
        }

        if(o == 0 || z == 0) {
            cout << "Ramos" << '\n';
            continue;
        }

        int ans = min(z, o);

        if(ans % 2 == 0) {
            cout << "Ramos" << '\n';
        }
        else {
            cout << "Zlatan" << '\n';
        }
    }
     
    return 0;
}
