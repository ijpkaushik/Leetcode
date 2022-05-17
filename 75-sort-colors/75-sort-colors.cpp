class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cR=0, cW=0, cB=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0)
                cR++;
            else if(nums[i]==1)
                cW++;
            else
                cB++;
        } 
        int i=0;
        while(i<nums.size()){            
            if(cR) {
                cR--;
                nums[i]=0;
                i++;
            }
            else if(cW) {
                cW--;
                nums[i]=1;
                i++;
            }
            else if(cB) {
                cB--;
                nums[i]=2;
                i++;
            }
        }
    }
};