class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int prefix = 0, mn = 0, ans = INT_MIN; 
        for (int x : nums) {
            prefix += x; 
            ans = max(ans, prefix - mn); 
            mn = min(mn, prefix); 
        }
        return ans; 
    }
};