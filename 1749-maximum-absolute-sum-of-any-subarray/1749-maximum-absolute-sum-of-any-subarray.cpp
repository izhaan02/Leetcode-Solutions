class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;

        int sum=0;
        int diff=0;
        

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            diff+=nums[i];

            mini=min(mini,diff);
            maxi=max(maxi,sum);

            if(sum<0) sum=0;
            if(diff>0) diff=0;
        }

        return max(maxi,abs(mini));
    }
};