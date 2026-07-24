class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int curr=0;
        int mini=INT_MAX;
        int sum=0;
        int maxi=INT_MIN;
       

        for(int i=0;i<nums.size();i++){

            curr+=nums[i]; 
            sum+=nums[i];

            mini=min(curr,mini);
            maxi=max(sum,maxi);

            if(curr>0) curr=0;
            if(sum<0) sum=0;


        }

        int total=accumulate(nums.begin(),nums.end(),0);

        if(total==mini) return maxi;

         
        return max(maxi, total - mini);
    }
};