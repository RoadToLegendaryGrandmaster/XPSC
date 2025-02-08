// Problem Name: First negative in every window of size k
// Problem link: https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
       int l = 0;
       int r = 0;
       vector<int> ans;
       queue<int> q;
       
       while(r < arr.size()) {
           if(arr[r] < 0) {
               q.push(arr[r]);
           }
           
           if(r - l + 1 == k) {
               if(!q.empty()) {
                   ans.push_back(q.front());
                   if(arr[l] == q.front()) {
                       q.pop();
                   }
               }
               else {
                   ans.push_back(0);
               }
               
               r++;
               l++;
           }
           else {
               r++;
           }
       }
       
       return ans;
    }
};