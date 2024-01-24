/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 07:52:53 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/24 08:51:40 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void *init_stack()
{
	t_stack *stack = malloc(sizeof(t_stack));
	if (stack != NULL)
		stack->top = NULL;
	return (stack);	
}



	// struct	t_list *stack_a;
	// struct	t_list *stack_b;