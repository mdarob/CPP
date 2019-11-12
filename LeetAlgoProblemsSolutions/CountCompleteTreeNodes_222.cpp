/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 /*
Runtime: 24 ms, faster than 98.31% of C++ online submissions for Count Complete Tree Nodes.
Memory Usage: 28.4 MB, less than 100.00% of C++ online submissions for Count Complete Tree Nodes.
 */
 
class Solution {
public:
    int countNodes(TreeNode* root) 
    {
        if(root == nullptr) return 0;
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
};
