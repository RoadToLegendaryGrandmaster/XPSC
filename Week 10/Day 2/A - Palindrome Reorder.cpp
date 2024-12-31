// Problem name: A - Palindrome Reorder
// Problme link: https://vjudge.net/contest/682611#problem/A
#include <bits/stdc++.h>

using namespace std;

int cnt[26];

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);

    string s; cin >> s;
    for(auto& c: s) {
        cnt[c - 'A']++;
    }

    bool ans = true;
    int k = 0;
    for(int i = 0; i < 26; i++) {
        if(cnt[i] % 2) k++;
        if(k > 1) {
            ans = false;
        }
    }

    if(!ans) {
        cout << "NO SOLUTION" << '\n';
        return 0;
    }

    string str = "";
    for(int i = 0; i < 26; i++) {
        int sz = cnt[i];
        if(sz % 2 == 1) {
            continue;
        }

        for(int j = 0; j < sz / 2; j++) {
            str += char(i + 'A');
        }
    }

    for(int i = 0; i < 26; i++) {
        int sz = cnt[i];
        if(sz % 2 == 0) {
            continue;
        }

        for(int j = 0; j < sz; j++) {
            str += char(i + 'A');
        }
    }

    for(int i = 25; i >= 0; i--) {
        int sz = cnt[i];
        if(sz % 2 == 1) {
            continue;
        }
        
        for(int j = 0; j < sz / 2; j++) {
            str += char(i + 'A');
        }
    }
    

    cout << str << '\n';

    return 0;
}
