#include "monty.h"
#include "lists.h"

/**
 * rotl_handller - handles  rotl instruction
 * @stack: double pointer to  stack to push to
 * @line_number: number of  line in  file
 */
void rotl_handller(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int num  = 0;

	(void)line_number;

	if (*stack == NULL)
		return;
	temp = get_dnodeint_at_index(*stack, 0);
	num = temp->n;
	delete_dnodeint_at_index(stack, 0);
	add_dnodeint_end(stack, num);
}

/**
 * rotr_handller - handles  rotr instruction
 * @stack: double pointer to  stack to push to
 * @line_number: number of  line in  file
 */
void rotr_handller(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int num = 0, len = dlistint_len(*stack);

	(void)line_number;

	if (*stack == NULL)
		return;
	temp = get_dnodeint_at_index(*stack, len - 1);
	num = temp->n;
	delete_dnodeint_at_index(stack, len - 1);
	add_dnodeint(stack, num);
}

/**
 * stack_handller - handles  stack instruction
 * @stack: double pointer to  stack to push to
 * @line_number: number of  line in  file
 */
void stack_handller(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	data.qflag = 0;
}


/**
 * queue_handller - handles  queue instruction
 * @stack: double pointer to  stack to push to
 * @line_number: number of  line in  file
 */
void queue_handller(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	data.qflag = 1;
}
