#include<unordered_map>
class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
    unordered_map<int,int> dup;
    for(int i=0;i<arr.size();i++){
        if(dup.find(arr[i])!=dup.end()){
                return true;
        }
        dup[arr[i]]=i;
    }
    return false;
    }
};