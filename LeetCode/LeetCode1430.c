/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isValid(struct TreeNode* root, int* arr, int arrSize, int start) {
	if (root == NULL) {
		return false;
	}
	if (start >= arrSize) {
		return NULL;
	}
	if (root->val != arr[start]) {
		return false;
	}
	if (root->left == NULL && root->right == NULL) {
		return start + 1 == arrSize;
	}
	return isValid(root->left, arr, arrSize, start + 1) || isValid(root->right, arr, arrSize, start + 1);
}
bool isValidSequence(struct TreeNode* root, int* arr, int arrSize) {
	return isValid(root, arr, arrSize, 0);
}