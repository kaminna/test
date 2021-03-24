/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteNode(struct ListNode* head, int val)
{
	struct ListNode* p = head;
	if (p->val == val)
	{
		head = head->next;
		return head;
	}
	while (p->next)
	{
		if (p->next->val == val)
		{
			p->next = p->next->next;
			break;
		}
		p = p->next;
	}
	return head;
}