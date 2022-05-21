// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1, high=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isBadVersion(mid)==true && isBadVersion(mid-1)==false)
                return mid;
            if(isBadVersion(mid))
                high=mid-1;
            if(!isBadVersion(mid))
                low=mid+1;                
        }
        return -1;
    }
};