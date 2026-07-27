class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxSum=0;

        long long windowSum=0;

        int n=nums.size();
        unordered_map<int,int>isPresent;

        int currSize=0;
        int left=0;

        for(int right=0;right<n;right++){

            
            windowSum+=nums[right];
            currSize++;

            while(isPresent.find(nums[right])!=isPresent.end() || currSize>k){
                windowSum-=nums[left];
                
                isPresent.erase(nums[left]);
                left++;
                currSize--;
            }
            isPresent[nums[right]]++;

            if(currSize==k){
                maxSum=max(maxSum,windowSum);
                // isPresent.erase(nums[left]);
                // left++;
                // currSize--;

            }
        }

        return maxSum;
        

    }
};