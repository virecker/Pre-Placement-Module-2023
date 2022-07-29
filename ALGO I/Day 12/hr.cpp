class Solution {
public:
    int t[101][2];
    int dp(vector<int> & nums,int idx,bool flag){
        if(idx<0){
            return 0;
        }
        if(t[idx][flag]!=-1){
            return t[idx][flag];
        }
        if(flag==true){ // last house is considered
                return t[idx][1]=dp(nums,idx-1,false);
        }
        return t[idx][0]=max(nums[idx]+dp(nums,idx-1,true),dp(nums,idx-1,false));
        
    }
    int rob(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        return dp(nums,nums.size()-1,false);
    }
};