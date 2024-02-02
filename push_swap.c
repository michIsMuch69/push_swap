/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-micheldusserre <jean-micheldusserr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:28:50 by jedusser          #+#    #+#             */
/*   Updated: 2024/02/01 11:49:55 by jean-michel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack_a)
{
	t_list	*current;

	current = stack_a;
	while (current != NULL)
	{
		printf("%d\n", current->content);
		current = current->next;
	}
}

void	fill_stack(int argc, char **argv, t_list **stack_a)
{
	int		i;
	int		new_value;
	t_list	*new_node;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			new_value = ft_atoi(argv[i]);
			new_node = ft_lstnew(new_value);
			if (!new_node)
			{
				free_list(*stack_a);
				exit (EXIT_FAILURE);
			}
			ft_lstadd_back(stack_a, new_node);
			i++;
		}
	}
}

void fusion(t_list **stack_a, t_list **stack_b)
{
    int count;

    while (*stack_b != NULL)
    {
        count = 0; 
        if (*stack_a == NULL || (*stack_b)->content < (*stack_a)->content)
            push(stack_b, stack_a, 'a'); 
        else
        {
            while (*stack_a && (*stack_b)->content > (*stack_a)->content && count < ft_lstsize(*stack_a))
            {
                rotate(stack_a, 'a');
                count++;
            }
            push(stack_b, stack_a, 'a'); 
            while (count > 0)
            {
                reverse_rotate(stack_a, 'a');
                count--;
            }
        }
    }
}


int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list  *stack_b;
	stack_a = NULL;
	stack_b = NULL;
	print_error(argc, argv);
	fill_stack(argc, argv, &stack_a);
	segment_sort_and_push(&stack_a, &stack_b);
	fusion(&stack_a, &stack_b);
	printf("%s\n", "StackA");
	 print_stack(stack_a);
	printf("%s\n", "StackB");
	//printf ("----%d\n", (stack_b)->content);
	print_stack(stack_b);
	free_list(stack_a);
	free_list(stack_b);
	return (0);
}
