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

 //*************************************************** LEET CODE PROBLEM NUMBER 226 ***************************************************************

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        if(root->left== NULL && root->right== NULL) return root;
        else{
           TreeNode *leftTree=invertTree(root->left);
            TreeNode *rightTree=invertTree(root->right);
            root->left=rightTree;
            root->right=leftTree;
        }
        return root;
    }
};
