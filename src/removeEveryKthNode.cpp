/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	if (head == NULL || K <= 1)
		return NULL;
	else
	{
		if (head == NULL || K <= 1)
			return NULL;
		else
		{
			struct node *start;
			struct node *p;
			struct node *prev;
			p = start = head;
			int len = 0;
			while (p != NULL)
			{
				p = p->next;
				len++;
			}
			int pos;
			int temp = 1;
			for (pos = 1; pos <= len; pos++)
			{
				if (pos%K == 0)
				{
					int i = temp;
					p = start;
					while (i < pos)
					{
						prev = p;
						p = p->next;
						i++;
					}
					start = p->next;
					prev->next = p->next;
					temp = pos + 1;
				}
			}
			return head;
		}
	}
}