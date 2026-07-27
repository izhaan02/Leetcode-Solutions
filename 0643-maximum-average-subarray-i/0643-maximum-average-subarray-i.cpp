class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi=INT_MIN;

        double sum=0;
        for(int i=0;i<k;i++) sum+=nums[i];

        double avg=sum/k;

        maxi=(avg);
        int n=nums.size();
        for(int i=k;i<n;i++){
            sum=sum+nums[i]-nums[i-k];
            avg=sum/k;
            maxi=max(maxi,avg);
        }
        return maxi;


    }
};