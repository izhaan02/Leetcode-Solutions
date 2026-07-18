class Solution {
public:
    int solve(vector<vector<int>>& triangle,int row, int start){
        if(row>=triangle.size() || start>=triangle[row].size()) return 0;

        int op1=triangle[row][start]+solve(triangle,row+1,start);
        int op2=triangle[row][start]+solve(triangle,row+1,start+1);
        return min(op1,op2);

        
    }
    int solveUsingMem(vector<vector<int>>& triangle,int row, int start, vector<vector<int>>&dp){
        if(row>=triangle.size() || start>=triangle[row].size()) return 0;

        if(dp[row][start]!=INT_MAX) return dp[row][start];

        int op1=triangle[row][start]+solveUsingMem(triangle,row+1,start,dp);
        int op2=triangle[row][start]+solveUsingMem(triangle,row+1,start+1,dp);
        return dp[row][start]=min(op1,op2);

        
    }
    //int solveUsingTabulation
    int minimumTotal(vector<vector<int>>& triangle) {
        int row=0;
        int start=0;
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(triangle[n-1].size(),INT_MAX));
        
        int ans=solveUsingMem(triangle,row,start,dp);
        return ans;


        //int ans=0;

        // int n=triangle.size();

        // for(int i=n-1;i>=0;i--){
        //     int mini=INT_MAX;
        //     for(int j=0;j<triangle[i].size();j++){
        //         mini=min(mini,triangle[i][j]);
        //     }
        //     ans+=mini;
        // }
        // return ans;
    }
};