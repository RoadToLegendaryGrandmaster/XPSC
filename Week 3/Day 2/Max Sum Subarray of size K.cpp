// Problem Name: Max Sum Subarray of size K
// Problem link: https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        long long ans = -1e18;
        long long sm = 0;
        
        int l = 0;
        int r = 0;
        while(r < arr.size()) {
            sm += arr[r];
            if(r - l + 1 == k) {
                ans = max(ans, sm);
                sm -= arr[l];
                l++;
                r++;
            }
            else {
                r++;
            }
        }
        
        return ans;
    }
};