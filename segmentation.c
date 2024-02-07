/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segmentation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 08:55:32 by jedusser          #+#    #+#             */
/*   Updated: 2024/02/07 10:55:26 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void segment_sort_and_push(t_list **stack_a, t_list **stack_b) 
{
    int i;

    while (*stack_a != NULL) 
    {
        if (ft_lstsize(*stack_a) >= 3) 
        {
            sort_three(stack_a);
            i = 0;
            while (i < 3) 
            {
                push(stack_a, stack_b, 'b');
                i++;
            }
        } 
        else
        {
            sort_three(stack_a);
            while (*stack_a != NULL) 
            {
                push(stack_a, stack_b, 'b');
            }
        }
    }
}
// pas reconnu par le visualize.