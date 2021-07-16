/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max3(int a, int b, int c) {
	int max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	return max;
}
int maxPathSumRoot(struct TreeNode* root) {
	if (root == NULL) {
		return 0;
	}
	return max3(
		maxPathSumRoot(root->left) + root->val,
		maxPathSumRoot(root->right) + root->val,
		0
	);
}
int maxPathSum(struct TreeNode* root) {
	if (root == NULL) {
		return INT_MIN;
	}
	return max3(
		maxPathSumRoot(root->left) + root->val + maxPathSumRoot(root->right),
		maxPathSum(root->left),
		maxPathSum(root->right)
	);
}