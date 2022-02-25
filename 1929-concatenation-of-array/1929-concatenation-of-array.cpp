class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        int i = 0;
        for(; i < nums.size(); i++){
            ans.push_back(nums[i]);
        }

        return ans;
    }
};