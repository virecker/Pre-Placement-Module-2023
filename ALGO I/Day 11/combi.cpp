class Solution {
public:
    vector<vector<int>> ans;
    void helper(int n,int k,int num,int currK,vector<int> &x){
        if(currK == k){
            ans.push_back(x);
            return;       
        }
        if(num > n  or currK > k) {
            return;
        }

        x.push_back(num);
        helper(n,k,num+1,currK+1,x);
        x.pop_back();
        helper(n,k,num+1,currK,x);
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> x;
        helper(n,k,1,0,x);
        return ans;
    }
};