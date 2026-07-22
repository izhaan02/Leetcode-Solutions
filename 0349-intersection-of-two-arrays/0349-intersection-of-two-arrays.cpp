class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>us1;
        unordered_set<int>us2;
        vector<int>ans;

        for(int i=0;i<nums1.size();i++){
            us1.insert(nums1[i]);
        }

        for(int i=0;i<nums2.size();i++){
            us2.insert(nums2[i]);
        }
        
        for(int x: us2){
            if(us1.contains(x)) ans.push_back(x);
        }
        return ans;
        
    }
};