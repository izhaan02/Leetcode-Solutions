class Solution {
public:
    int findPivot(vector<int>& nums){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;

        while(s<=e){
            int mid=s+(e-s)/2;

            if(nums[mid]>=nums[0]){
                ans=mid;
                s=mid+1;
            }
            else e=mid-1;
        }
        return ans;

    }
    int findMin(vector<int>& nums) {
        int pivot=findPivot(nums);
        if(pivot==nums.size()-1) return nums[0];
        else return nums[pivot+1];

    }
};