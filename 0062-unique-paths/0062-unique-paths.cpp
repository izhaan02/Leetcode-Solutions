class Solution {
public:
    int solve(int r, int c,int i, int j,vector<vector<int>>&dp){

        if (i > r || j > c) return 0;
        if (i == r && j == c) return 1;

        if( dp[i][j]!=-1) return  dp[i][j];

        int rightMove=solve(r,c,i,j+1,dp); 
        int downMove=solve(r,c,i+1,j,dp); 
        //int diagonalMove=solve(r,c,i+1,j+1); 
        dp[i][j]=rightMove+downMove;
        return rightMove+downMove;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int ans=solve(m-1,n-1,0,0,dp);

        return ans;
        
    }
};