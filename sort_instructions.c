/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:24:47 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/24 10:15:59 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_stack *from_stack, t_stack *to_stack)
{
	t_node *temp_node = from_stack->top;
	if(temp_node)
	{
		from_stack->top = temp_node->next;
		temp_node->next = to_stack->top;
		to_stack->top = temp_node;
	}
}

int main(void)
{
	t_stack *stack_a;
	t_stack *stack_b;
	t_node *node_a;
	t_node *node_b;
	int value;

	
	value = 5;
	stack_a = init_stack();
	stack_b = init_stack();
	if(!stack_a || !stack_b)
		return 1;
	
	node_a = malloc(sizeof(t_node));
	if(node_a != NULL)
	{
		node_a->content = &value;
		node_a->next = NULL;
		stack_a->top = node_a;
	}
	else
		return (1);

	push(stack_a, stack_b);

	if (stack_a->top != NULL) 
		printf("Sommet de stack_a: %d\n", *(int *)stack_a->top->content);
	else
		printf("stack_a est vide\n");

	if (stack_b->top != NULL)
		printf("Sommet de stack_b: %d\n", *(int *)stack_b->top->content);
	else
		printf("stack_b est vide\n");
	

	free(node_a);
	free(stack_a);
	free(stack_b);
	return 0;
}