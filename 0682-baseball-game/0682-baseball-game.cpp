class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;

        for(int i=0;i<operations.size();i++){
            string s =operations[i];

            if(s=="C"){
                if(!st.empty())
                st.pop();
            }
            else if(s=="D"){
                if(st.size()>0){
                    int top=st.top();
                    //st.pop();
                    st.push(top*2);

                }
                
            }
            else if(s=="+"){
                if(st.size()>=2){
                    int first=st.top();
                    st.pop();
                    int sec=st.top();
                    st.pop();
                    int newEle=first+sec;
                    st.push(sec);
                    st.push(first);
                    st.push(newEle);

                }
                
            }
            else{
                int num=stoi(s);
                st.push(num);
            }
        }
        int sum=0;
        while(!st.empty()){
            cout<<st.top()<<" ";
            sum+=st.top();
            st.pop();
        }
        return sum;
        
    }
};