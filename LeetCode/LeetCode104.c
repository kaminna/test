/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int leftMax = maxDepth(root->left);
	int rightMax = maxDepth(root->right);
	int max = leftMax;
	if (rightMax > leftMax)
	{
		max = rightMax;
	}
	return max + 1;
}