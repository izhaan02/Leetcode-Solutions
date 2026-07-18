class Solution {
public:
    int solve(vector<vector<int>>& grid,int r, int c , int i, int j, vector<vector<int>>&dp){
        if(i>r || j>c) return INT_MAX;
        if(i==r && j==c) return grid[i][j];

        if(dp[i][j]!=-1) return dp[i][j];

        int op1=grid[i][j];
        int temp=solve(grid,r,c,i+1,j,dp);
        if(temp==INT_MAX) op1= INT_MAX;
        else op1+=temp;

        int op2=grid[i][j];
        int temp2=solve(grid,r,c,i,j+1,dp);
        if(temp2==INT_MAX) op2= INT_MAX;
        else op2+=temp2;

        

        return dp[i][j]=min(op1,op2);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        vector<vector<int>>dp(rows,vector<int>(cols,-1));

        int ans=solve(grid,rows-1,cols-1,0,0,dp);
        return ans;
    }
};