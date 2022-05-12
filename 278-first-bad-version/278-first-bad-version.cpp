// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // for(int i=1; i<=n; i++){
        //     if(isBadVersion(i))
        //         return i;
        // }
        // return -1;
        int low = 1, high = n, mid;
        while (low < high) {
            mid = low + (high - low) / 2;
            if (isBadVersion(mid)) high = mid;
            else low = mid+1;
        }
        return low;
    }
};