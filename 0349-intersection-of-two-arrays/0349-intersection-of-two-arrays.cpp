class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>uniqueEleSet;

        for(int i=0;i<nums1.size();i++){
            uniqueEleSet.insert(nums1[i]);
        }
        vector<int>ans;
        for(int i=0;i<nums2.size();i++){
            if(uniqueEleSet.contains(nums2[i])){
                ans.push_back(nums2[i]);
                uniqueEleSet.erase(nums2[i]);
            }
        }
        return ans;
    }
};