/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:24:47 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/29 14:22:18 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


/* 
---to_stack lui-même est un pointeur. 
Il pointe vers un autre pointeur qui représente le sommet de la pile de destination.
---*to_stack est le pointeur vers lequel to_stack pointe. 
En d'autres termes, *to_stack est le pointeur vers le sommet de la pile de destination. */

int push(t_list **from_stack, t_list **to_stack, char stack_name)
{
	t_list *to_move;
	
	if (from_stack == NULL || *from_stack == NULL)
		return (1);
	to_move = *from_stack;
	*from_stack = to_move->next;
	to_move->next = *to_stack;
	*to_stack = to_move;
	if (stack_name == 'a')
		printf("pa\n");
	else if (stack_name == 'b')
		printf("pb\n");
	return (0);
}

int rotate(t_list **stack, char stack_name)
{
	t_list *first;
	t_list *current;
	
	if(stack == NULL || (*stack)->next == NULL)
		return (1);
	first = *stack;
	*stack = first->next;
	current = *stack;
	while (current->next != NULL)
		current = current->next;		
	current->next = first;
	first ->next = NULL;
	if (stack_name == 'a')
		printf("ra\n");
	else if (stack_name == 'b')
		printf("rb\n");
	return (0);
}
int	reverse_rotate(t_list **stack, char stack_name)
{
	t_list	*before_last;
	t_list	*current;

	if (stack == NULL || (*stack)->next == NULL)
		return (1);
	before_last = NULL;	
	current = *stack;
	while (current->next != NULL)
	{
		before_last = current;
		current = current->next;
	}
	if (before_last != NULL)
		before_last->next = NULL;
	current->next = *stack;
	*stack = current;
	if (stack_name == 'a')
		printf("rra\n");
	else if (stack_name == 'b')
		printf("rrb\n");
	return (0);
}

void	sort_three(t_list **stack_b)
{
	t_list *node1;
	t_list *node2;
	t_list *node3;

	if (stack_b == NULL || (*stack_b)->next == NULL || (*stack_b)->next->next == NULL)
		exit (EXIT_FAILURE);
	node1 = *stack_b;  
	node2 = (*stack_b)->next;  
	node3 = (*stack_b)->next->next;
	if (node1->content > node2->content)
		swap_nodes_val(node1, node2);
	rotate(stack_b, 'b');  
	node2 = *stack_b;
	node3 = (*stack_b)->next;
	if (node2->content > node3->content)
		swap_nodes_val(node2, node3);
	reverse_rotate(stack_b, 'b');  // 
	node1 = *stack_b;
	node2 = (*stack_b)->next;
	if (node1->content > node2->content)
		swap_nodes_val(node1, node2);
}

void sort_chunk(t_list **chunk)
{
	t_list *node1;
	t_list *node2;
	
	node1 = *chunk;
	node2 = (*chunk)->next;
	if(ft_lstsize(*chunk) <= 1)
		return;
	else if (ft_lstsize(*chunk) ==  2)
	{
		if (node1->content > node1->next->content)
			swap_nodes_val(node1, node2);
	}
	else 
		sort_three(chunk);
}


