class compare{
    public:
    // bool operator()(int a, int b){
    //     if(a==0) return true;
    //     if(b==0) return false;

    //     while(a>0 && b>0){
    //         int d1=a%10;
    //         a=a/10;

    //         int d2=b%10;
    //         b=b/10;

    //         if(d1<d2) return true;
    //         if(d1>d2) return false;


    //     }
    //     if(a==0) return true;
    //     else return false;
        
    // }
    bool operator()(int a, int b){
        string c=to_string(a);
        string d=to_string(b);

        return c+d<d+c;
    }
};
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),compare());
        string ans="";
        for(int i=nums.size()-1;i>=0;i--){
            ans+=to_string(nums[i]);
        }
        if(ans[0]=='0') return "0";
        return ans;
    }
};