class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n,-1));

        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;

        int val=1;
        while(top<=bottom && left<=right){
            //top 
            for(int i=left;i<=right;i++){
                matrix[top][i]=val;
                val++;
            }
            top++;
            //right
            for(int i=top;i<=bottom;i++){
                matrix[i][right]=val;
                val++;
            }
            right--;

            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    matrix[bottom][i]=val;
                    val++;
                }
                bottom--;
            }

            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    matrix[i][left]=val;
                    val++;
                }
                left++;
            }

            
        
        }
        return matrix;
    }
};