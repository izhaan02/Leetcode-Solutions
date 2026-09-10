class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxP=1;
        int minP=1;
        int finalP=INT_MIN;

        for(int i=0;i<nums.size();i++){

            if(nums[i]<0)
            swap(minP,maxP);

            maxP=max(nums[i],maxP*nums[i]);
            minP=min(nums[i],minP*nums[i]);

            

            finalP=max(finalP,max(maxP,minP));
            cout<<finalP<<endl;

        }
        return finalP;
    }
};