class Solution 
{
 public:
    int lengthOfLongestSubstring(string s) 
    {
        int i=0,j=0,ans=0;
        map<char,int>st;
        while(i<s.length())
        {
            st[s[i]]++;
            while(st[s[i]]>1)
            {  
                st[s[j]]--;
                j++;     
            }
            ans=max(ans,i-j+1);
            i++;
        }
        return ans;   
    }
};