class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int read=0;
        int write=0;

        int n=nums.size();

        while(read<n){
            if(write-2>=0 && nums[read]==nums[write-2]){
                read++;
            }
            else{
                nums[write]=nums[read];
                write++;
                read++;
            }
        }
        return write;
    }
};