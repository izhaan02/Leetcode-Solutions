class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low = 1;
        int high=-1;
        int n=piles.size();

        for(int i=0;i<n;i++){
            high=max(high,piles[i]);
        }
        
        int ans=-1;

        while(low<=high){

            int mid=low+(high-low)/2;
           

            long long totalHour=0;
            for(int i=0;i<n;i++){
                totalHour+=ceil(double(piles[i])/double(mid));
            }
            

            if(totalHour<=h){
                
                ans=mid;
                high=mid-1;
            }
            else{
               
                low=mid+1;
            }

        }
        return ans;

    }
};