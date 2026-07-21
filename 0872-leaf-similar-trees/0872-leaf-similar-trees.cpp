/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void buildLeafSequence(TreeNode* root, vector<int>&v){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            v.push_back(root->val);
            return;

        }
        buildLeafSequence(root->left,v);
        buildLeafSequence(root->right,v);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leafSeq1;
        vector<int>leafSeq2;

        buildLeafSequence(root1,leafSeq1);

        buildLeafSequence(root2,leafSeq2);
        
        if(leafSeq1.size()!=leafSeq2.size()) return false;

        for(int i=0;i<leafSeq1.size();i++){
            //cout<<leafSeq1[i]<<" "<<leafSeq2[i]<<" ";
            if(leafSeq1[i]!=leafSeq2[i]) return false;
        }
        return true;

    }
};