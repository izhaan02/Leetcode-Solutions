class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        

        for(int i=0;i<nums.size();i++){
            int rightSum=nums[nums.size()-1]-nums[i];
            int leftSum=0;
            if(i>0) leftSum=nums[i-1];

            if(leftSum==rightSum) return i;
        }
        return -1;


    }
};