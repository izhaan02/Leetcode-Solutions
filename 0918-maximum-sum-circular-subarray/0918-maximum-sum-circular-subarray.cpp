class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0;
        int diff=0;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int ans=INT_MIN;
        int total=accumulate(nums.begin(),nums.end(),0);

        for(int x: nums){
            sum+=x;
            diff+=x;

            maxi=max(maxi,sum);
            mini=min(mini,diff);
            if(sum<0) sum=0;
            if(diff>0) diff=0;
            

        }
        cout<<"maxi "<<maxi<<", mini "<<mini<<endl;
        if(total==mini) return maxi;
        
        ans=max(maxi,total-mini);
        return ans;

    }
};