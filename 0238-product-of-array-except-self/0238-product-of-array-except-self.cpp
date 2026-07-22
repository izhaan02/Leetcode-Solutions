class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix(nums.size());
        vector<int>suffix(nums.size());
        int leftP=1;
        int rightP=1;

        vector<int>ans(nums.size());

        for(int i=0;i<nums.size();i++){
            prefix[i]=nums[i]*leftP;
            leftP=leftP*nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            suffix[i]=nums[i]*rightP;
            rightP=rightP*nums[i];
        }
        leftP=1;
        //int rightP=1;

        for(int i=0;i<nums.size();i++){

            if(i==0) leftP=1;
            else leftP=prefix[i-1];

            if(i==nums.size()-1) rightP=1;
            else rightP=suffix[i+1];

            ans[i]=leftP*rightP;


            
        }
        return ans;


    }
};