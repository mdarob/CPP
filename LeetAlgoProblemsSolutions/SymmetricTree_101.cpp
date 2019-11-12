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
 * Runtime: 8 ms, faster than 47.02% of C++ online submissions 
 * for Symmetric Tree.Memory Usage: 14.8 MB, less than 77.97% 
 * of C++ online submissions for Symmetric Tree.
 */
class Solution 
{
public:
    bool isMirror(TreeNode * root1, TreeNode * root2)
    {
        if(root1 == NULL && root2 == NULL ) return true;
        if(root1 == NULL || root2 == NULL) return false;
        return isMirror(root1->left, root2->right) && isMirror(root1->right, root2->left) && root1->val == root2->val;
    }
    
    bool isSymmetric(TreeNode* root) 
    {
          return isMirror(root, root);
    }     
};
