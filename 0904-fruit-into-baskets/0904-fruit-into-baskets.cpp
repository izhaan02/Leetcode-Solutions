class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // int a =fruits[i];
        // int b;
        // int i=0;
        // int j=0;
        // int basket1=0;
        // int basket2=0;

        // while(i<fruits.size()){
        //     a=fruits[i];
            

        //     while(j<friuts.size()){
        //         if(fruits[i]==a) {
        //             i++;
        //             j++;
        //         }
        //     }
        // }
        int maxi=0;
        int left=0;
        map<int,int>mp;
        
        for(int i=0;i<fruits.size();i++){
            mp[fruits[i]]++;

            while(mp.size()>2){
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0) mp.erase(fruits[left]);
                left++;

            }
            maxi=max(maxi,i-left+1);
        }
        return maxi;
    }
};