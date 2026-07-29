class Solution {
public:
    int characterReplacement(string s, int k) {
        // int ans=0;
        // for(int i=0;i<s.length();i++){
        //     int maxi=0;
        //     int freq[26]={0};
        //     for(int j=i;j<s.length();j++){
        //         freq[s[j]-'A']++;
        //         maxi=max(maxi,freq[s[j]-'A']);
        //         int change=j-i+1-maxi;
        //         if(change<=k) ans=max(ans,j-i+1);
        //         else break;
        //     }
        // }
        // return ans;

        int ans=0;
        int maxi=0;
        int left=0;
        int freq[26]={0};
        for(int right=0;right<s.length();right++){
            freq[s[right]-'A']++;
            maxi=max(maxi, freq[s[right]-'A']);

            while(right-left+1-maxi>k){
                freq[s[left]-'A']--;
                maxi=0;
                for(int i=0;i<26;i++) maxi=max(maxi,freq[i]);
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};