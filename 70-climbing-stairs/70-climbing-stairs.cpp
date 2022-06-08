class Solution {
    int dp[46]={0};
public:
    int climbStairs(int n) {
        if(n==1) {
            dp[n]=1; 
            return 1;
        }
        if(n==2) {
            dp[n]=2; 
            return 2;
        }
        else if(dp[n]!=0) 
            return dp[n];
        dp[n] = climbStairs(n-1)+climbStairs(n-2);
        return dp[n];
    }
};