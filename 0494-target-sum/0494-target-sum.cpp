class Solution {
public:
    int solve(vector<int>& nums,int target,int sum,int i){
        if(i>=nums.size()){
            if(sum==target) return 1;
            return 0;
        }
        int posi=solve(nums,target,sum+nums[i],i+1);
        int neg=solve(nums,target,sum-nums[i],i+1);
        return posi+neg;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        int ans=solve(nums,target,sum,0);
        return ans;
    }
};