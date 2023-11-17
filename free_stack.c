#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *auxx;

	auxx = head;
	while (head)
	{
		auxx = head->next;
		free(head);
		head = auxx;
	}
}
