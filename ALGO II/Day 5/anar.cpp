class Solution {
public:
    int maxArea(vector<int>& height) {
        int right = height.size()-1;
        int maxArea = 0;
            int left = 0;
            while(left<right){
                int temp = right-left;
                int temp2 = min(height[right],height[left]);
                maxArea = ((temp*temp2)>maxArea)?(temp*temp2):maxArea;
                if(height[left]<height[right])
                    left++;
                else
                    right--;
            }
        return maxArea;
    }
};