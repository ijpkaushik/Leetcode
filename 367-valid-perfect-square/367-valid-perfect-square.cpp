class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=1, high=num;
        long long mid=1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(mid*mid==num)
                return true;
            else if(mid*mid<num)
                low=mid+1;
            else if(mid*mid>num)
                high=mid-1;            
        }
            return false;
    }
};