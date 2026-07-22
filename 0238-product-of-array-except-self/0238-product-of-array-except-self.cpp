class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size());

        int leftP=1;
        for(int i=0;i<nums.size();i++){
            ans[i]=leftP;
            leftP=leftP*nums[i];
        }

        int rightP=1;

        for(int i=nums.size()-1;i>=0;i--){
            ans[i]=ans[i]*rightP;

            rightP=rightP*nums[i];
        }
        return ans;

    }
};