class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> twoNum;
         for (int i = 0; i <nums.size(); ++i){
             for (int j = i+1; j < nums.size(); ++j)
                 if((nums[i]+nums[j])==target){
                     twoNum.push_back(i);
                     twoNum.push_back(j);
                     return twoNum;
                 }
         }
        return twoNum;
    }
};