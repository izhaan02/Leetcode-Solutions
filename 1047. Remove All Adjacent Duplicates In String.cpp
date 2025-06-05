class Solution {
public:
    string removeDuplicates(string s) {
        
        int idx=0,n=s.length();
        string ans="";

        while(idx<n){

            if(ans.length()>0 && ans[ans.length()-1]==s[idx]){
                ans.pop_back();
                
            }
            else{
                ans.push_back(s[idx]);
                
            }
            idx++;
        }
        return ans;



    }
};