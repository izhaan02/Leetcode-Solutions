class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());

        int n=nums.size();
        int minDiff=INT_MAX;
        int finalSum=0;
        
        for(int i=0;i<n-2;i++){

            if(i>0 && nums[i]==nums[i-1]) continue;

            int j=i+1;
            
            int k=n-1;
            
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                int currDiff=abs(target-sum);


                if(currDiff==0){
                    return sum;
                    // ans.push_back({nums[i],nums[j],nums[k]});
                    // while(j<k && nums[j]==nums[j+1]) j++;
                    // while(k>j && nums[k]==nums[k-1]) k--;
                    // j++;
                    // k--;


                }
                else if (target-sum>0) j++;
                else if(target-sum<0) k--;
                if(currDiff<minDiff){
                    minDiff=currDiff;
                    finalSum=sum;
                }
            }

            
        }
        return finalSum;
    }
};