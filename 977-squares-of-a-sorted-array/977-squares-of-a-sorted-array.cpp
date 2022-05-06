class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        multiset<int> s;
        multiset<int>::iterator itr;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]*nums[i]);
        }
        for(itr = s.begin(); itr != s.end(); itr++){
            ans.push_back(*itr);
        }
        return ans;
    }
};