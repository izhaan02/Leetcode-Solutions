class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ans=-1;
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>count){
                count=mp[nums[i]];
                ans=nums[i];
            }
        }
        return ans;
    }
};