/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segmentation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 08:55:32 by jedusser          #+#    #+#             */
/*   Updated: 2024/02/06 13:43:36 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// t_list *get_top_elements(t_list **stack, int n) 
// {
// 	int i;

//     t_list *top_elements = NULL; 
//     t_list *temp_stack = NULL; 
//     t_list *temp;

// 	i = 0;
//     while(i < n && *stack != NULL)
// 	{
//         temp = *stack; 
//         *stack = (*stack)->next; 
//         temp->next = temp_stack; 
//         temp_stack = temp; 
// 		i++;
//     }
//     while (temp_stack != NULL) 
// 	{
//         temp = temp_stack; 
//         temp_stack = temp_stack->next; 
//         temp->next = top_elements; 
//         top_elements = temp; 
//     }
//     return top_elements; 
// }

void segment_sort_and_push(t_list **stack_a, t_list **stack_b) 
{
    int i;

    while (*stack_a != NULL) 
    {
        if (ft_lstsize(*stack_a) > 3) 
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
