class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=INT_MIN;
        int maxi=1;
        int mini=1;

        for(int i=0;i<nums.size();i++){

           if(nums[i]<0) swap(maxi,mini);

           maxi=max(nums[i],maxi*nums[i]);
           mini=min(nums[i],mini*nums[i]);

           ans=max(ans,maxi);
        }
        return ans;
    }
};