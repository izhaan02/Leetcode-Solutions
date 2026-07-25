class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxi=INT_MIN;

        while(i<j){
            int maxHeight=min(height[i],height[j]);
            int waterCollected=maxHeight*(j-i);

            maxi=max(maxi,waterCollected);

            if(height[i]>height[j]) j--;
            else i++;

        }
        return maxi;
    }
};