class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> vec;
        for(int i=0; i<n; i++)
            vec.push_back({nums[i], i});
        
        sort(vec.begin() , vec.end());
        
        int s=0, e=n-1;
        while(s<e)
        {
            
            int sum = vec[s].first + vec[e].first;
            if(sum == target)
            {
                return{vec[s].second, vec[e].second};
            }
            
            else if(sum>target)
            {
                e--;
            }
            else
            {
                s++;
            }
        }   
        return {1,1};
    }
};