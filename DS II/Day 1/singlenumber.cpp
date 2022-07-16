class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0; // making ans variable for storing the ans 
        for(int i=0;i<nums.size();i++){  
            ans ^=nums[i]; // XOR OPERATION
        }
        return ans;
    }
    
};