class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int sum = 0;
        // int total = nums.size()*(nums.size() + 1)/2;
        // for (auto number : nums) {
        //     sum += number;
        // }
        // return total - sum;
        int ans=nums.size();
        for(int i=0;i<nums.size();i++) 
            ans ^= (nums[i]^i);
        return ans;
    }
};