class Solution {
public:
    int search(vector<int>& nums, int target) {
        for (int lo = 0, hi = nums.size()-1; lo <= hi; ) {
            int mid = lo + (hi - lo)/2; 
            if (nums[mid] == target) return mid; 
            else if (nums[lo] <= nums[mid]) 
                if (nums[lo] <= target && target < nums[mid]) hi = mid - 1; 
                else lo = mid + 1; 
            else 
                if (nums[mid] < target && target <= nums[hi]) lo = mid + 1; 
                else hi = mid - 1; 
        }
        return -1; 
    }
};