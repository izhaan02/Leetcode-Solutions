class Solution {
public:
    int solve(vector<int>& coins, int amount, int i,vector<vector<int>>&dp){
        if(i>=coins.size()){
            if(amount==0) return 1;
            return 0;
        }
        int inc=0;
        int exc=0;
        if(dp[amount][i]!=-1) return dp[amount][i];
        if(coins[i]<=amount) inc+=solve(coins,amount-coins[i],i,dp);
        exc+=solve(coins,amount,i+1,dp);
        dp[amount][i]=inc+exc;
        return inc+exc;
        
    }
    int change(int amount, vector<int>& coins) {
        int sum=0;
        vector<vector<int>>dp(amount+1,vector<int>(coins.size()+1,-1));
        int ans=solve(coins,amount,sum,dp);
        return ans;

    }
};