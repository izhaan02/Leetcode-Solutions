class Solution {
public:
    int helper(vector<int>& nums, int k){
        int cnt=0;
        unordered_map<int,int>freq;
        
        int left=0;
        for(int right=0;right<nums.size();right++){
            freq[nums[right]]++;

            while(freq.size()>k){
               
                freq[nums[left]]--;
                if(freq[nums[left]]==0) freq.erase(nums[left]);
                left++;
            }
            cnt+=(right-left+1);
            
            
        }
        return cnt; 
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int atMostK=helper(nums,k);
        int atMostKMinusOne=helper(nums,k-1);
        return atMostK-atMostKMinusOne;
    }
};