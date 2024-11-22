// Problem Name: Longest Substring with K Uniques
// Problem link: https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int n = s.size();
        int l = 0;
        int r = 0;
        map<char, int> cnt;
        
        int ans = -1;
        while(r < n) {
            cnt[s[r]]++;
            if(cnt.size() == k) {
                ans = max(ans, r - l + 1);
            }
            else {
                while(cnt.size() > k && l <= r) {
                    cnt[s[l]]--;
                    if(cnt[s[l]] == 0) {
                        cnt.erase(s[l]);
                    }
                    l++;
                }
            }
            
            r++;
        }
        
        return ans;
    }
    
};