class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int count=0;

        // for(int i=0;i<nums.size();i++){
        //     int sum=0;

        //     for(int j=i;j<nums.size();j++){
        //         sum+=nums[j];
        //         if(sum==k) count++;
        //     }

        // }
        // return count;

        unordered_map<int,int>mp;
        int preSum=0;
        int count=0;
        mp[0]=1;


        for(int i=0;i<nums.size();i++){
            preSum=preSum+nums[i];

            int look=preSum-k;

            if(mp.find(look)!=mp.end()){
                count=count+mp[look];
            }

            mp[preSum]++;
            



        }
        return count;

        

        


    }
};