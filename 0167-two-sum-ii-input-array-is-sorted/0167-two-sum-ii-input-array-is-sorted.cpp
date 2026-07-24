class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;

        while(i<j){
            int sum=numbers[i]+numbers[j];

            if(sum==target){
                return {i+1,j+1};
            }
            else if(target-sum>0)i++;
            else j--;
        }
        return {-1};
    }
};