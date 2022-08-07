class Solution {
public:
    string longestPalindrome(string s) {
        int low = 0,high = 0,start = 0,maxlength = 1;
        
        for(int i = 0;i<s.length();i++)
        {
            low = i-1;
            high = i+1;
            
            while(high<s.length() and s[i] == s[high])
                high++;
            
            while(low>=0 and s[i]==s[low])
                low--;
            while(low>=0 and high<s.length() and s[low] == s[high])
            {
                high++;
                low--;
            }
            
            if(maxlength<high-low-1)
            {
                maxlength = high-low-1;
                start = low+1;
            }
        }
        
        return s.substr(start,maxlength);
    }
};