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


 //***************************************************** LEET CODE PROBLEM NUMBER 104 *****************************************************************
class Solution {
public:
    int maxdepth=0;
    int maxDepth(TreeNode* root) {
        if(root==NULL) return NULL;
        else{
            int leftdepth=maxDepth(root->left);
            int rightdepth=maxDepth(root->right);
            maxdepth=max(leftdepth,rightdepth);
        }
        return maxdepth+1;
    }
};
