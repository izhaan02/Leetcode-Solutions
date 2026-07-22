class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int candidate=nums[0];

        for(int x: nums){
            if(count==0){
                candidate=x;
                count++;
            }
            else if(candidate!=x) count--;

            else count++;
        }
        return candidate;
    }
};