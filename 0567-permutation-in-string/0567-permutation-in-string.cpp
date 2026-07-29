class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int reqFreq[26]={0};

        for(char ch: s1){
            reqFreq[ch-'a']++;
        }
        
        int left=0;
        int currFreq[26]={0};
        
        for(int right=0;right<s2.length();right++){
            currFreq[s2[right]-'a']++;
            
            while(currFreq[s2[right]-'a']>reqFreq[s2[right]-'a']){
                currFreq[s2[left]-'a']--;
                left++;
            }
            if(right-left+1==s1.length()) return true;

        }
        return false;
    }
};