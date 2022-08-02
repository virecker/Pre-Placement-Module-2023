class Solution {
public:

bool backspaceCompare(string s, string t) {


    vector<char> v,v1;
    int i=0;
    
    while(s[i]!='\0'){
        if(s[i]=='#' && v.size()>0) v.pop_back();
        else if(s[i]!='#') v.push_back(s[i]);
        i++;
    }
    i=0;
    while(t[i]!='\0'){
        if(t[i]=='#' && v1.size()>0) v1.pop_back();
        else if(t[i]!='#') v1.push_back(t[i]);
        i++;
    }
    
    if(v==v1) return true;
    else return false;
}
};