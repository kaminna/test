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
	if (leftMax > rightMax)
	{
		return leftMax + 1;
	}
	return rightMax + 1;
}
int diameterOfBinaryTree(struct TreeNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int max = maxDepth(root->left) + maxDepth(root->right);
	int L = diameterOfBinaryTree(root->left);
	int R = diameterOfBinaryTree(root->right);
	if (L > max)
	{
		max = L;
	}
	if (R > max)
	{
		max = R;
	}
	return max;
}