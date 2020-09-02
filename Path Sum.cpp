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

 //************************************************* LEED CODE PROBLEM NUMBER 112 *******************************************************************************
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == NULL) return false;
        else if(root->left ==NULL && root->right==NULL ){
            if(sum - root->val ==0)
                return true;
            return false;
        }
        else{
            bool leftv=hasPathSum(root->left,sum-root->val);
            bool rightv=hasPathSum(root->right,sum-root->val);
            if(leftv || rightv)
                return true;
        }
        return false;
    }
};
