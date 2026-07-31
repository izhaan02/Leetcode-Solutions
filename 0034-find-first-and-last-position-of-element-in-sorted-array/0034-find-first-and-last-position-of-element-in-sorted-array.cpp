class Solution {
public:
    int solve1(vector<int>& nums, int &target){
        int ans=-1;
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target) {

                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]>target) e=mid-1;
            else s=mid+1;
        }
        return ans;
    }
    int solve2(vector<int>& nums, int &target){
        int ans=-1;
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target) {

                ans=mid;
                s=mid+1;
            }
            else if(nums[mid]>target) e=mid-1;
            else s=mid+1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstocc=solve1(nums,target);
        int lastocc=solve2(nums,target);
        return {firstocc,lastocc};
    }
};