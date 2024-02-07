/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fusion.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:40:48 by jean-michel       #+#    #+#             */
/*   Updated: 2024/02/07 10:49:43 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*pop(t_list **stack)
{
	t_list *top;
	
	top = NULL;
    if (stack && *stack) 
	{
        top = *stack;
        *stack = (*stack)->next;
        top->next = NULL;
    }
    return (top);
}
int	find_insert_pos(t_list **stack, t_list *element)
{
	int		position;
	t_list	*current;
	
	position = 0;
	current = *stack;
	while (current != NULL && element->content > current->content)
	{
		current = current -> next;
		position++;
	}
	return (position);
}

t_list *get_element(t_list **stack, int position)
{
	t_list *current;
	int count;

	current = *stack;
	count = 0;
	
	while (current != NULL && count < position)
	{
		current = current->next;
		count++;
	}
	if (count == position)
	{
		return current;
	}
	return NULL;
}

void fusion(t_list **stack_a, t_list **stack_b)
{
    t_list *element;
    int position;
    int i;

    while (*stack_b != NULL)
    {
        element = pop(stack_b);
        if (*stack_a == NULL || element->content < (*stack_a)->content)
            push(&element, stack_a, 'a');
        else
        {
            position = find_insert_pos(stack_a, element);
            i = 0;
            while (i < position)
            {
                rotate(stack_a, 'a');
                i++;
            }
            push(&element, stack_a, 'a');
            i = 0;
            while (i < position)
            {
                reverse_rotate(stack_a, 'a');
                i++;
            }
        }
    }
}



