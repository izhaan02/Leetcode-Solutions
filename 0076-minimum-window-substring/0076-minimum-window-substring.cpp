class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.length();
        int n = t.length();
        unordered_map<char,int>freq;

        for(int i=0;i<n;i++){
            freq[t[i]]++;
        }

        int cnt=0;
        int left=0;
        int minLen=INT_MAX;
        int sIdx=-1;
        for(int right=0;right<m;right++){
            
            if(freq[s[right]]>0) cnt++;
            freq[s[right]]--;

            while(cnt==n){
                if(right-left+1<minLen){
                    minLen=right-left+1;
                    sIdx=left;
                }
                freq[s[left]]++;
                
               
                if(freq[s[left]]>0) cnt--;
                left++;
                


            }
            

        }
        return sIdx==-1? "":s.substr(sIdx,minLen);
    }
};