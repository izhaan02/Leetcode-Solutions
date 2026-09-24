class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int right=0,left=0;

        int ans=0;
        unordered_set<char>freq;

        while(right<n){
            
            while(freq.find(s[right])!=freq.end()){
                freq.erase(s[left]);
                left++;
            }
            freq.insert(s[right]);
            ans=max(ans,right-left+1);
            right++;



        }
        return ans;
       
    }
};