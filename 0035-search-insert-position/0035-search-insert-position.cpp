class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=-1;

        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;

            if(nums[mid]==target){
                ans= mid;
                return ans;
            }
            else if(nums[mid]>target){
                ans=mid;
                e=mid-1;
            }
            else{
                //ans=mid;
                s=mid+1;

            }
        }
        return ans==-1? nums.size():ans;
    }
};