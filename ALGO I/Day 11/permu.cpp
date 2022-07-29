class Solution {
public:
    void helper(int n,vector<int> &nums,vector<vector<int>> &ans,int p){
        if(p == n){
            ans.push_back(nums);
            return;
        }
        
        for(int i = p; i < n;i++){
            swap(nums[p],nums[i]);
            helper(n,nums,ans,p+1);
            swap(nums[p],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        helper(n,nums,ans,0);
        return ans;
    }
};