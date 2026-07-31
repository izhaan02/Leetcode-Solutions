class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans=0;

        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){

            if(mid+1<nums.size() && nums[mid]<nums[mid+1]){
                s=mid+1;
            }
            else{
                ans=mid;
                e=mid-1;
            }

            mid=s+(e-s)/2;

        }
        return ans;
    }
};