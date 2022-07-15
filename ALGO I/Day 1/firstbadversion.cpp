// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution {
public:
    int binarysearch(int n)
    {
        int l=1,r = n;
        while(l<r){
        int mid = l +(r-l)/2;
        if(isBadVersion(mid))r = mid;
        else l = mid+1;
        }
        return l;
    }
    int firstBadVersion(int n) {
        int ans = binarysearch(n);
        
        return ans;
    }
};