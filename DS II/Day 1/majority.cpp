class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*Boyer-Moore majority vote algo*/
        int ans = 0, vote = 0; 
        for (auto& x : nums) {
            if (vote == 0) ans = x; 
            if (x == ans) ++vote; 
            else --vote; 
        }
        return ans; 
    }
};