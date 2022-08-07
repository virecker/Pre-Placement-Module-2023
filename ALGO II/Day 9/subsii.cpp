class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        vector<vector<int>> ans(1); 
        for (int i = 0, ii = 0, sz = 0; i < nums.size(); ++i) {
            if (i && nums[i-1] == nums[i]) ii = sz; 
            else ii = 0; 
            for (sz = ans.size(); ii < sz; ++ii) {
                vector<int> elem = ans[ii]; 
                elem.push_back(nums[i]); 
                ans.push_back(elem); 
            }
        }
        return ans; 
    }
};