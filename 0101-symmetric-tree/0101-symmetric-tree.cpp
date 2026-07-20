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
    bool solve(TreeNode* leftTree,TreeNode* rightTree){
        if(leftTree==NULL && rightTree==NULL) return true;
        if(leftTree==NULL && rightTree!=NULL) return false;
        if(leftTree!=NULL && rightTree==NULL) return false;

        //bool ans=false;
        if(leftTree->val!=rightTree->val){
            return false;
        }
        else{
            bool op1=solve(leftTree->left,rightTree->right);
            bool op2=solve(leftTree->right,rightTree->left);
            return op1&&op2;
        }
    }
    bool isSymmetric(TreeNode* root) {
        bool ans=solve(root->left,root->right);
        return ans;
    }
};