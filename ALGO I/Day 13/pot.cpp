class Solution {
public:
    bool isPowerOfTwo(int n) {
	
		//base case
        if(n <= 0) return false;
		
		//checking the power of two
        else if((n&(n-1)) == 0) return true;
		
        else return false;
    }
};