class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int s =0;
        int e=nums.size()-1;
        

        while(s<e){
            int mid=s+(e-s)/2;

            if(mid%2==0){
                if(mid+1<nums.size()&&nums[mid]!=nums[mid+1]){
                    
                    e=mid;

                }
                
                else{
                    s=mid+1;
                }
            }
            else{
                if(mid+1<nums.size()&&nums[mid]==nums[mid+1]){
                    //ans=mid+1;
                    e=mid;
                }
                
                 else s=mid+1;
            }
        }
        return nums[s];
    }
};