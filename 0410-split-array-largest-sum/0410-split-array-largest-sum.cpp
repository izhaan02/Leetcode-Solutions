class Solution {
public:
    bool possible(int mid,int& k,vector<int>& nums){
        int subarray=1;
        int sum=0;

        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]>mid){
                subarray++;
                sum=nums[i];
            }
            else{
                sum+=nums[i];
            }
        }
        return subarray<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=0;
        int high=0;

        for(int i=0;i<nums.size();i++){
            low=max(low,nums[i]);
            high+=nums[i];
        }
        while(low<=high){
            int mid=low+(high-low)/2;

            if(possible(mid,k,nums)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};