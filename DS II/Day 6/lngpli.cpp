class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq; 
        for (auto& ch : s) ++freq[ch]; 
        int ans = 0, odd = 0; 
        for (auto& [k, v] : freq) {
		    ans += v/2*2; 
            if (v&1) odd = 1; 
        }
        return ans + odd; 
    }
};