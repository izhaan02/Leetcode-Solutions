class Solution {
public:
    void solve(int idx,string &digits, string &curr, vector<string>&ans,vector<string>&mp){
        if(idx==digits.length()){
            ans.push_back(curr);
            return;
        }
        char d=digits[idx];
        int num=d-'0';

        for(int i=0;i<mp[num].length();i++){
            curr+=mp[num][i];
            solve(idx+1,digits,curr,ans,mp);

            curr.pop_back();

        }

        
        

    

    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};

        vector<string>mp{
            "",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"
        };
        
        vector<string>ans;
        string curr="";
        solve(0,digits,curr,ans,mp);
        return ans;
    }
};