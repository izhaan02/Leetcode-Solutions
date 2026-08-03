class Solution {
public:
    int solve(vector<int>&piles,int i, int j){
        if(i>=j) return piles[i];

        int choice1=piles[i]-solve(piles,i+1,j);
        int choice2=piles[j]-solve(piles,i,j-1);
        return max(choice1,choice2);

    }
    int solveUsingMem(vector<int>&piles,int i, int j, vector<vector<int>>&dp){
        if(i>=j) return piles[i];

        if(dp[i][j]!=INT_MIN) return dp[i][j];

        int choice1=piles[i]-solveUsingMem(piles,i+1,j,dp);
        int choice2=piles[j]-solveUsingMem(piles,i,j-1,dp);
        return dp[i][j]=max(choice1,choice2);

    }
    bool stoneGame(vector<int>& piles) {

        int i=0;
        int j=piles.size()-1;
        vector<vector<int>>dp(piles.size(),vector<int>(piles.size(),INT_MIN));
        int ans=solveUsingMem(piles,i,j,dp);

        
        return ans>0;
    }
};