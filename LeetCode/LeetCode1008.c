/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* bstFromPreorder(int* preorder, int preorderSize) {
	struct TreeNode* root = malloc(sizeof(struct TreeNode));
	root->val = preorder[0];
	root->left = root->right = NULL;
	struct TreeNode* path[100];
	int topIndex = 0;
	path[topIndex] = root;
	for (int i = 1; i < preorderSize; i++) {
		struct TreeNode* node = malloc(sizeof(struct TreeNode));
		node->val = preorder[i];
		node->left = node->right = NULL;
		if (preorder[i] < path[topIndex]->val) {
			path[topIndex]->left = node;
			topIndex++;
			path[topIndex] = node;
		}
		else {
			while (topIndex - 1 >= 0 && path[topIndex - 1]->val < preorder[i]) {
				topIndex--;
			}
			if (topIndex - 1 >= 0) {
				path[topIndex]->right = node;
				path[topIndex] = node;
			}
			else {
				path[0]->right = node;
				path[0] = node;
			}
		}
	}
	return root;
}
/*
ตÝน้
struct TreeNode* bstFromPreorderRanged(int* preorder, int start, int end) {
	if (start == end) {
		return NULL;
	}
	struct TreeNode* root = malloc(sizeof(struct TreeNode));
	root->val = preorder[start];
	int i = start + 1;
	while (i < end && preorder[i] < root->val) {
		i++;
	}
	root->left = bstFromPreorderRanged(preorder, start + 1, i);
	root->right = bstFromPreorderRanged(preorder, i, end);
	return root;
}

struct TreeNode* bstFromPreorder(int* preorder, int preorderSize) {
	return bstFromPreorderRanged(preorder, 0, preorderSize);
}*/