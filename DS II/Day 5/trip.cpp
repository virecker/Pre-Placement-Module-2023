class Solution {
public:

bool increasingTriplet(vector<int>& nums) {
    if(nums.size()<3)
    {
        return false;
    }
    
    int min_one = 2147483647;
    int min_two = 2147483647;
	
    for(int num : nums)
    {
    
        if(num<min_one)
        {
            min_one = num;
        }
    
        if(num>min_one)
        {
            min_two = min(min_two,num);
        }
        if(num>min_two)
        {
            return true;
        }
    }

    return false;
}
};