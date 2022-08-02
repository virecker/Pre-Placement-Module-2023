class Solution {
public:
    int maxArea(vector<int>& height) {
    
        int max_area = 0;
        int n = height.size();
        for(int i = 0; i < n-1; i++){
            for(int j = i + 1; j < n; j++){
                int min_height = min(height[i] , height[j]);
                max_area = max(min_height * (j-i), max_area);
            }
        }
        
        return max_area;

    }
};