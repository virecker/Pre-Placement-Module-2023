class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ele=*max_element(nums.begin(),nums.end());
        auto it=find(nums.begin(),nums.end(),ele);
        return (it-nums.begin());
    }
};