class Solution {
public:
    int solve(int i,vector<int>& cost ,vector<int>& dp){
        if(i>=cost.size()) return 0;

        if(dp[i]!=-1) return dp[i];
        int oneStep=cost[i]+solve(i+1,cost,dp);
        int twoStep=cost[i]+solve(i+2,cost,dp);
        return dp[i]=min(oneStep,twoStep);

    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(), -1);
        int ans0=solve(0,cost,dp);
        int ans1=solve(1,cost,dp);
        return min(ans0,ans1);
    }
};