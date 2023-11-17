#include "monty.h"
/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hdr = *head;
	if (hdr->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxx = hdr->next->n % hdr->n;
	hdr->next->n = auxx;
	*head = hdr->next;
	free(hdr);
}
