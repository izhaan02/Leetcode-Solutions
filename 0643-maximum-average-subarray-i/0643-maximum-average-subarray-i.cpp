class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        
        double avg=INT_MIN;
        int i=0;

        for(int j=0;j<nums.size();j++){
            sum=sum+nums[j];

            if(j-i+1>k){
                sum=sum-nums[i];
                i++;
            }
            double temp=sum/k;
            if(j-i+1==k)
            avg=max(avg,temp);
            
            
        }
        return avg;
    }
};