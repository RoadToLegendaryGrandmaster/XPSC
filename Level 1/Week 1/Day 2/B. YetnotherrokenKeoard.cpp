// Problem: B. YetnotherrokenKeoard
// Link: https://codeforces.com/problemset/problem/1907/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        string str = "";

        int t_b = 0;
        int t_B = 0;

        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] == 'b') {
                t_b++;
            }
            else if(s[i] == 'B') {
                t_B++;
            }
            else {
                if(s[i] >= 'a' && s[i] <= 'z') {
                    if(t_b <= 0) str += s[i];
                    else t_b--;

                }
                else {
                    if(t_B <= 0) str += s[i];
                    else t_B--;
                }
            }
        }

        reverse(str.begin(), str.end());
        
        cout << str << '\n';
    }
    
    return 0;
}