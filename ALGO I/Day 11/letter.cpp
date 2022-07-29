class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans = {""}; 
        for (auto& ch : s) 
            for (int i = 0, n = ans.size(); i < n; ++i) {
                if (isalpha(ch)) ans.push_back(ans[i] + string(1, ch^32)); 
                ans[i].push_back(ch); 
            }
        return ans; 
    }
};