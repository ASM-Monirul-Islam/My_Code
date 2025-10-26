class Solution {
public:

    int minCost(vector<int>&cost, vector<int>&dp, int n) {
        if(n<=1) return 0;
        if(dp[n] != -1) return dp[n];
        return dp[n]=min(cost[n-1]+minCost(cost, dp, n-1), cost[n-2]+minCost(cost, dp, n-2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+2, -1);
        return minCost(cost, dp, n);
    }
};