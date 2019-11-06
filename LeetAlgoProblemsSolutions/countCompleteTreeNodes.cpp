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
	int countNodes(TreeNode* root)
	{
		if (root == NULL) return 0;
		int a = 1;
		int l = countNodes(root->left);
		int r = countNodes(root->right);
		return l + r + a;
	}
};