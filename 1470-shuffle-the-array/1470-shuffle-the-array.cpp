class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> sol;
        for(int i=0, j=n; i<n; i++, j++){
            sol.push_back(nums[i]);
            sol.push_back(nums[j]);
        }
        return sol;
    }
};