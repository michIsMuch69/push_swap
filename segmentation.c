/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segmentation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 08:55:32 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/31 16:00:14 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	pop(t_list** top_ref) 
{
   	t_list	*top;
	
	int value; 
    if (*top_ref == NULL) 
        exit(EXIT_FAILURE);
	top = *top_ref;
    value = top->content;
    *top_ref = top->next;
    free(top);
    return value;
}

void segment_sort_and_push(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int val;
	t_list *chunk;

	i = 0;
	chunk = NULL;
	while(ft_lstsize(*stack_a) > 0)
	{
		i = 0;
		while (i < 3 && *stack_a != NULL)
		{
			val = pop(stack_a);
			push_val(&chunk, val);
			i++;
		}
		sort_chunk(&chunk);
		while (chunk != NULL)
		{
			val = pop(&chunk);
			push_val(stack_b, val);
		}
	}
}

