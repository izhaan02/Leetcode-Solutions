class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int reqFreq[26]={0};
        for(char ch: p){
            reqFreq[ch-'a']++;
        }
        vector<int>idx;
        int left=0;
        int currFreq[26]={0};
        for(int right=0;right<s.length();right++){
            currFreq[s[right]-'a']++;
            
            while(currFreq[s[right]-'a']>reqFreq[s[right]-'a']){
                currFreq[s[left]-'a']--;
                left++;
            }
            if(right-left+1==p.length()) idx.push_back(left);

        }
        return idx;
    }
};