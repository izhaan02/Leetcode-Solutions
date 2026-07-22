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
    void helper(TreeNode* root, int& min, long &secMin){
        if(root==NULL) return;

        if(root->val<min){
            if(min!=INT_MAX){
                secMin=min;
               
            }
            min=root->val;
            
        }
        else if(root->val<secMin && root->val!= min){
            secMin=root->val;
        }

        helper(root->left,min,secMin);
        helper(root->right,min,secMin);
    }
    int findSecondMinimumValue(TreeNode* root) {

        int min=INT_MAX;
        long secMIN=LONG_MAX;

        helper(root,min,secMIN);

        if(secMIN==LONG_MAX) return -1;
        else return secMIN;
    }
};