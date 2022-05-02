class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int maxProfit=0, mn=INT_MAX;
        
        for(int i=0; i<prices.size(); i++){ 
            mn = min(mn, prices[i]);
            maxProfit = max(maxProfit, prices[i]-mn);         
        }
        return maxProfit;
    }
};