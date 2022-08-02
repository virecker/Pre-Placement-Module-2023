class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [&](auto& lhs, auto& rhs) {return lhs[1] < rhs[1];}); 
        int ans = 0, prev = INT_MIN; 
        for (auto& interval : intervals) 
            if (interval[0] < prev) ++ans; 
            else prev = interval[1]; 
        return ans; 
    }
};