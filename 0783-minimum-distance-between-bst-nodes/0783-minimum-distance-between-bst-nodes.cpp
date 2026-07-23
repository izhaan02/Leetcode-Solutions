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
    int mini=INT_MAX;
    vector<int>inorder;

    void solve(TreeNode* root){
        if(root==NULL) return ;

        solve(root->left);

        //mini=min(mini,root->val-leftNode);
        inorder.push_back(root->val);

        solve(root->right);
        //mini=min(mini,rightNode-root->val);
        return;



    }


    int minDiffInBST(TreeNode* root) {
        solve(root);

        for(int i=1;i<inorder.size();i++){
            mini=min(mini,inorder[i]-inorder[i-1]);
        }

        return mini;
    }
};