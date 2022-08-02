class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> tmp(nums.size(),1);
        
        int lr = 1,rl =1;
        for(int i = 1;i<nums.size();i++)
        {
            tmp[i] = lr =lr*nums[i-1];
        }
        
        for(int i = nums.size()-2;i>-1;i--)
        {
            rl = rl*nums[i+1];
            tmp[i] = tmp[i]*rl;
        }
        return tmp;
    }
};