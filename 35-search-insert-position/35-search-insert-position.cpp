class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1, mid=0;
        while(low<=high){
            mid=low+(high-low)/2;
            if(target<nums[mid]){
                high=mid-1;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else if(nums[mid]==target)
                return mid;
        }
        return low;
    }
};