/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
typedef struct
{
	int depth;
	int parent;
}Info;
Info getDepthAndParent(struct TreeNode* root, int target, int parent) {
	if (root == NULL) {
		return (Info) { -1, 0 };
	}
	if (root->val == target) {
		return (Info) { 0, parent };
	}
	Info left = getDepthAndParent(root->left, target, root->val);
	Info right = getDepthAndParent(root->right, target, root->val);
	if (left.parent) {
		return (Info) { left.depth + 1, left.parent };
	}
	if (right.parent) {
		return (Info) { right.depth + 1, right.parent };
	}
	return (Info) { -1, 0 };
}
bool isCousins(struct TreeNode* root, int x, int y) {
	Info xInfo = getDepthAndParent(root, x, 0);
	Info yInfo = getDepthAndParent(root, y, 0);
	return xInfo.depth == yInfo.depth && xInfo.parent != yInfo.parent;
}