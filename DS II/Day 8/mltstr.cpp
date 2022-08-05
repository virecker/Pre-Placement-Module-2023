class Solution {
public:
    string multiply(string num1, string num2) {
        int m = num1.size(), n = num2.size(); 
        string ans(m+n, '0'); 
        for (int i = 0; i < m; ++i) 
            for (int j = 0; j < n; ++j) 
                for (int k = i+j+1, carry = (num1[i]-'0') * (num2[j] - '0'); carry; --k, carry /= 10) {
                    carry += ans[k] - '0'; 
                    ans[k] = carry % 10 + '0'; 
                }
        int k = ans.find_first_not_of("0"); 
        return k == string::npos ? "0" : ans.substr(k); 
    }
};