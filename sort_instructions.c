/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:24:47 by jedusser          #+#    #+#             */
/*   Updated: 2024/02/06 13:46:13 by jedusser         ###   ########.fr       */
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

void sort_three(t_list **stack_b) {
    if (*stack_b == NULL || (*stack_b)->next == NULL || (*stack_b)->next->next == NULL)
        return; 
    if ((*stack_b)->content > (*stack_b)->next->content)
        swap(stack_b, 'b');
    rotate(stack_b, 'b'); 
    if ((*stack_b)->content > (*stack_b)->next->content)
        swap(stack_b, 'b');
    reverse_rotate(stack_b, 'b'); 
    if ((*stack_b)->content > (*stack_b)->next->content) 
        swap(stack_b, 'b');
}

int	swap(t_list **stack, char stack_name)
{
	t_list	*first;
	t_list	*second;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return (1);
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	
	if (stack_name == 'a')
		printf("sa\n");
	else if (stack_name == 'b')
		printf("sb\n");
	return (0);
}
