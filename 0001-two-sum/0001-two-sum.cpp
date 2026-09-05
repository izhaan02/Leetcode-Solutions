class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int complimentryEle=target-nums[i];
            if(mp.find(complimentryEle)!=mp.end()){
                return {mp[complimentryEle],i};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};