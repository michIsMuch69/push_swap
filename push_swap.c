/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:28:50 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/24 15:22:10 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_list *stack = NULL; // Initialisation de la liste chaînée
	int	i;

	i = 1;
    if (argc > 1)
    {
		while (i < argc) 
		{
            int new_value = atoi(argv[i]);
            t_list *new_node = ft_lstnew(new_value);
            ft_lstadd_back(&stack, new_node);
			i++;
        }
    }
	
	printf("%d\n", stack->content);

	printf("%d\n", stack->next->content);

    return 0;
}
