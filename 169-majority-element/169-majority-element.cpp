class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // map<int, int> mp;
        // int n=nums.size();
        // for(int i=0; i<n; i++)
        //     mp[nums[i]]++;
        // for(auto i:mp)
        //     if(i.second>n/2)
        //         return i.first;
        // return -1;
        int cand=-1, count=0;
        for(auto num : nums ) {
            if(count==0)
                cand=num;            
            count+=(num==cand)? 1 : -1;
        }  
        return cand;
    }
};