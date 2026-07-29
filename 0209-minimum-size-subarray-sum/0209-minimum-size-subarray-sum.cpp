class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int mini=INT_MAX;
        int left=0;
        int sum=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            

            while(sum>target){
                mini=min(mini,right-left+1);
                sum-=nums[left];
                left++;

            }
            if(sum>=target)
            mini=min(mini,right-left+1);
            
        }
        if(mini==INT_MAX) return 0;
        return mini;
    }
};