class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int last=nums.size()-1;   //Initialize last element of array 
        int start =0;               //Initialize first element of array
        int index = 0;              //For find index of element which are not present
        
        while(start<=last){

            int temp = start+(last-start)/2; //Get the center element of array 
            
            if(nums[temp] == target) return temp; //If element present return index for same
            

            if(target>nums[temp]) { 
                start = temp+1;
                index = temp+1;  //index of non present element
            }
                
            else {
                last =temp-1;
                index = temp; //index of non present element
            }
            
        }
        return index;
    }
};