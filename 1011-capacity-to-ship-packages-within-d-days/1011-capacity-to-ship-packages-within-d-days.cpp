class Solution {
public:
    int calDays(vector<int>& arr, int cap){
        int days=0;
        int sum=0;
        int i=0;
        while(i<arr.size()){

            
                sum+=arr[i];

                if(sum==cap){
                    days++;
                    sum=0;
                    i++;
                }
                else if(sum>cap){
                    days++;
                    sum=arr[i];
                    i++;
                }
                else{
                    i++;
                }
                
                

            
        }
        if(sum>0) days++;
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=-1;
        int high=0;
        int sum=0;
        int n=weights.size();

        for(int i=0;i<n;i++){
            low=max(low,weights[i]);
            high+=weights[i];
        }
        sum=high;

        while(low<=high){
            int mid=low+(high-low)/2;

            int totalDays=calDays(weights,mid);
            if(totalDays<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return low;
    }
};