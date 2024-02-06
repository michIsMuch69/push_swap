/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segmentation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 08:55:32 by jedusser          #+#    #+#             */
/*   Updated: 2024/02/06 11:45:45 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


t_list *get_top_elements(t_list **pile, int n) 
{
	int i;

    t_list *top_elements = NULL; 
    t_list *temp_stack = NULL; 
    t_list *temp;

	i = 0;
    while(i < n && *pile != NULL)
	{
        temp = *pile; 
        *pile = (*pile)->next; 
        temp->next = temp_stack; 
        temp_stack = temp; 
		i++;
    }
    while (temp_stack != NULL) 
	{
        temp = temp_stack; 
        temp_stack = temp_stack->next; 
        temp->next = top_elements; 
        top_elements = temp; 
    }
    return top_elements; 
}

void segment_sort_and_push(t_list **pile_a, t_list **pile_b) 
{
    int i;

    while (*pile_a != NULL) 
    {
        if (ft_lstsize(*pile_a) > 3) 
        {
            sort_three(pile_a);
            i = 0;
            while (i < 3) 
            {
                push(pile_a, pile_b, 'b');
                i++;
            }
        } 
        else
        {
            sort_three(pile_a);
            while (*pile_a != NULL) 
            {
                push(pile_a, pile_b, 'b');
            }
        }
    }
}


