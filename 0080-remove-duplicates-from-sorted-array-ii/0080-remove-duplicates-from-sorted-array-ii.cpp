class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int read=0;
        int write=0;

        while(read<nums.size()){
            if(read>=2 && nums[read]==nums[write-2]){
                //nums[write]=nums[read];
                read++;
                //write++;
            }
            else {
                nums[write]=nums[read];
                read++;
                write++;
            }
                
                
        }
        return write;
    }
};