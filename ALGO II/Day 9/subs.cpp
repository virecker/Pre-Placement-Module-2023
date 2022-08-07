class Solution {
public:
    void helper(vector<int> &nums,int idx,vector<vector<int>> &f,vector<int> &g){
        if(idx == nums.size()){
            f.push_back(g);
            return;
        }
        g.push_back(nums[idx]);
        helper(nums,idx+1,f,g);
        g.pop_back();
        helper(nums,idx+1,f,g);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> f;
        vector<int> g;
        helper(nums,0,f,g);
        return f;
    }
};