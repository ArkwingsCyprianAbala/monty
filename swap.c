#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *hdr;
	int leng = 0, auxx;

	hdr = *head;
	while (hdr)
	{
		hdr = hdr->next;
		leng++;
	}
	if (leng < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hdr = *head;
	auxx = hdr->n;
	hdr->n = hdr->next->n;
	hdr->next->n = auxx;
}
