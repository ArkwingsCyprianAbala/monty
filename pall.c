#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *hdr;
	(void)counter;

	hdr = *head;
	if (hdr == NULL)
		return;
	while (hdr)
	{
		printf("%d\n", hdr->n);
		hdr = hdr->next;
	}
}
