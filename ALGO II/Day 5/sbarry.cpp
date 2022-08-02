class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans = 0; 
        for (int i = 0, ii = 0, val = 1; i < nums.size(); ++i) {
            val *= nums[i]; 
            while (ii <= i && k <= val) val /= nums[ii++]; 
            ans += i - ii + 1; 
        }
        return ans; 
    }
};