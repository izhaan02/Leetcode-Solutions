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
    int solve(TreeNode* root,int &sum){
        if(root==NULL) return 0;
        int leftans=solve(root->left,sum);
        int rightans=solve(root->right,sum);

        sum+=abs(leftans-rightans);
        return leftans+rightans+root->val;
    }
    // void finalSum(TreeNode* root,int& sum){
    //     if(root==NULL) return ;

    //     sum+=root->val;
    //     finalSum(root->left,sum);
    //     finalSum(root->right,sum);
    // }
    int findTilt(TreeNode* root) {
        int sum=0;
        solve(root,sum);
        
        // finalSum(root,sum);
        return sum;
    }
};