class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;

        int n=s.length();

        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='('){
                st.push(ch);
            }
            else{
                //if(st.empty()) return 1;

                if(!st.empty() && ch==')' && st.top()=='('){
                    st.pop();

                }
               
                else st.push(ch);;
            }
        }

        return st.size();
        
    }
};