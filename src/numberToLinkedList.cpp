/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *start;
	start = NULL;
	if (N < 0)
	{
		N = N*-1;
	}
	if (N == 0)
	{
		struct node *temp;
		temp = (struct node *)malloc(sizeof(struct node));
		temp->num = 0;
		temp->next = NULL;
		start = temp;
		return start;
	}
	else
	{
		struct node *temp;
		while (N != 0)
		{
			temp = (struct node *)malloc(sizeof(struct node));
			int k = N % 10;
			temp->num = k;
			temp->next = start;
			start = temp;
			N = N / 10;
		}
		return start;
	}
}