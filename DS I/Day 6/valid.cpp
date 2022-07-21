class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        
        for(int i=0 ; i<s.length() ; i++){
            v1[s[i]-97]++;
        }
        
        for(int j=0 ; j<t.length() ; j++){
            v2[t[j]-97]++;
        }
        
        for(int i=0; i<26 ; i++){
            if(v1[i]!=v2[i]){
                return false;
            }
        }
        return true;
    }
};