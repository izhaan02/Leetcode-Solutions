class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int>freq;
        long long sum=0;
        long long ans=0;

        int i=0;
        for(int j=0;j<nums.size();j++){
            //int ele=nums[j];

            while(j-i+1>k || freq.find(nums[j])!=freq.end()){
                sum=sum-nums[i];
                freq.erase(nums[i]);
                i++;
            }
            sum=sum+nums[j];
            freq.insert(nums[j]);
            if(j-i+1==k){
                ans=max(ans,sum);
            }

        }
        return ans;
    }
};