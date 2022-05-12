// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int temp=0, n=nums.size();
//         for(int i=0; i<k; i++){
//             temp=nums[n-1];
//             for(int j=n-1; j>0; j--){
//                 nums[j]=nums[j-1];
//             }
//             nums[0]=temp;               
//         }
//     }
// };
class Solution {
    public :
    void reverse(vector<int>& nums, int i, int j){
        int li = i;
        int ri = j;
        
        while(li < ri){
            int temp = nums[li];
            nums[li] = nums[ri];
            nums[ri] = temp;
            
            li++;
            ri--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        if(k < 0){ 
            k += nums.size();
        }
        reverse(nums, 0, nums.size() - k - 1);
        reverse(nums, nums.size() - k, nums.size() - 1);
        reverse(nums, 0, nums.size() - 1);
    }
};