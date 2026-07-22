class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;

        int freq[26]={0};

        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }

        for(int i=0;i<t.size();i++){
            if(freq[t[i]-'a']>0){
                freq[t[i]-'a']--;
            }
            else return false;
        }
        return true;

        // unordered_map<char,int>mp;
        // for(int i=0;i<s.size();i++){
        //     mp[s[i]]++;
        // }

        // for(int i=0;i<t.size();i++){
        //     if(mp[t[i]]>0){
        //         mp[t[i]]--;
        //     }
        //     else return false;
        // }
        // return true;


    }
};