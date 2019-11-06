/*
Author: Md Rob
Date: 11/06/2019 @2:37PM
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
class Solution {
public:
    bool isLeaf(TreeNode * node)
    {
        if(node == NULL) return false;
        if(node->left == NULL && node->right == NULL)
            return true;
        return false;
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        int total = 0;
        if(root != NULL){
            if(isLeaf(root->left))
               total += root->left->val;             
            else                 
               total += sumOfLeftLeaves(root->left);            
            total += sumOfLeftLeaves(root->right);
        }
        return total;
    }
};
