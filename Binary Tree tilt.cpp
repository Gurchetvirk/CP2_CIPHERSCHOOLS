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

 //*************************************************** LEET CODE PROBLEM NUMBER 563 *********************************************************8
class Solution {
public:
    int findTilt(TreeNode* root) {
        if(root == NULL || (root->left == NULL && root->right==NULL)) return 0;
        /*else if (root->left == NULL && root->right==NULL) return root->val;
        else{
            int lefts=findTilt(root->left);
            int rights=findTilt(root->right);
            return abs(lefts - rights);
        }*/
        else{
            int lefts=findTilt(root->left);
            int rights=findTilt(root->right);
            int leftv=0,rightv=0;
            cout<<"Root="<<root->val<<" lefts="<<lefts<<" rights="<<rights;
            if(root->left!=NULL)
                leftv=root->left->val;
            if(root->right !=NULL)
                rightv=root->right->val;
            cout<<"leftv="<<leftv<<" rightv="<<rightv;
            return lefts + rights +abs(leftv - rightv);
        }
    }
};
