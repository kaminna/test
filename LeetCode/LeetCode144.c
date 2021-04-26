/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */
void preorder(struct TreeNode* root, int* returnSize, int* nums) {
	if (root == NULL) {
		return;
	}
	nums[(*returnSize)++] = root->val;
	preorder(root->left, returnSize, nums);
	preorder(root->right, returnSize, nums);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
	//µİ¹é
	int* nums = malloc(sizeof(int) * 2000);
	*returnSize = 0;
	preorder(root, returnSize, nums);
	return nums;
	/*µü´ú
		int* res = malloc(sizeof(int) * 2000);
	*returnSize = 0;
	if (root == NULL) {
		return res;
	}

	struct TreeNode* stk[2000];
	struct TreeNode* node = root;
	int stk_top = 0;
	while (stk_top > 0 || node != NULL) {
		while (node != NULL) {
			res[(*returnSize)++] = node->val;
			stk[stk_top++] = node;
			node = node->left;
		}
		node = stk[--stk_top];
		node = node->right;
	}
	return res;
	*/
	/*Morris±éÀú
		int* res = malloc(sizeof(int) * 2000);
	*returnSize = 0;
	if (root == NULL) {
		return res;
	}

	struct TreeNode *p1 = root, *p2 = NULL;

	while (p1 != NULL) {
		p2 = p1->left;
		if (p2 != NULL) {
			while (p2->right != NULL && p2->right != p1) {
				p2 = p2->right;
			}
			if (p2->right == NULL) {
				res[(*returnSize)++] = p1->val;
				p2->right = p1;
				p1 = p1->left;
				continue;
			} else {
				p2->right = NULL;
			}
		} else {
			res[(*returnSize)++] = p1->val;
		}
		p1 = p1->right;
	}
	return res;
	*/
}