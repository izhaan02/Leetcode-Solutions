class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        vector<int>ans(nums.size());
        int k=j;
        while(i<=j){
            if(abs(nums[j])>abs(nums[i])){
                ans[k]=nums[j]*nums[j];
                k--;
                j--;
            }
            else {
               
                ans[k]=nums[i]*nums[i];
                i++;
                k--;
            }
        }
        return ans;
    }
};