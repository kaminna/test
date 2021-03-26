/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head) {
	if (head == NULL) {
		return head;
	}
	if (head->next == NULL) {
		return head;
	}
	struct ListNode* slow = head;
	struct ListNode* fast = head->next;
	while (fast) {
		if (slow->val == fast->val) {
			slow->next = fast->next;
		}
		else {
			slow = slow->next;
		}
		fast = fast->next;
	}
	return head;
}