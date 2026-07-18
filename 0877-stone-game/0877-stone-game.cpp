class Solution {
public:
    int solve(vector<int>& piles, int i, int j){
        if(i==j) return piles[i];

        int takeleft=piles[i]-solve(piles,i+1,j);
        int takeright=piles[j]-solve(piles,i,j-1);

        return max(takeleft,takeright);
    }
    int solveUsingMem(vector<int>& piles, int i, int j, vector<vector<int>>&dp){
        if(i==j) return piles[i];

        if(dp[i][j]!=INT_MIN) return dp[i][j];

        int takeleft=piles[i]-solveUsingMem(piles,i+1,j,dp);
        int takeright=piles[j]-solveUsingMem(piles,i,j-1,dp);

        return dp[i][j]=max(takeleft,takeright);
    }

    bool stoneGame(vector<int>& piles) {
        vector<vector<int>>dp(piles.size(),vector<int>(piles.size(),INT_MIN));
        int ans=solveUsingMem(piles,0,piles.size()-1,dp);
        return ans>0;

    }
};