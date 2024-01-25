/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 08:24:47 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/25 14:57:18 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int swap(t_list **stack, char stack_name)
{
    t_list *first;
    t_list *second;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL) 
		return(1);
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