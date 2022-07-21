lass Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>ran(26,0);
        vector<int>mag(26,0);
        
        for(auto r:ransomNote)
            ran[r-'a']++;
        for(auto m:magazine)
            mag[m-'a']++;
        
        for(int i=0;i<26;i++)
        {
            if(ran[i]>mag[i])
                return false;
        }
        return true;
    }
};