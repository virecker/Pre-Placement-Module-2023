class Solution {
public:
    int getNthBit(const uint32_t number, const int pos){
        int mask = 1;
        int bitPos = number >> pos;
        return bitPos & mask;
    }
    
    int hammingWeight(uint32_t n) {
        int count = 0;
        for(int i = 0; i < 32; ++i){
            if(getNthBit(n,i) == 1){
               ++count; 
            }
        }
        return count;
    }
};