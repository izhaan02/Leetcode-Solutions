class Solution {
public:
    int trap(vector<int>& height) {
        int size=height.size();
        vector<int>leftWall(size);
        vector<int>rightWall(size);

        int left=0;

        for(int i=0;i<size;i++){
            leftWall[i]=max(left,height[i]);
            left=max(left,height[i]);
        }

        int right=0;

        for(int i=size-1;i>=0;i--){
            rightWall[i]=max(right,height[i]);
            right=max(right,height[i]);
        }

        int waterTrapped=0;

        for(int i=0;i<size;i++){
            int currWater=min(leftWall[i],rightWall[i])-height[i];
            waterTrapped+=currWater;
        }
        return waterTrapped;
    }
};