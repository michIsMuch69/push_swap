/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:28:50 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/25 15:48:10 by jedusser         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	t_list	*stack_a;

	stack_a = NULL;
	print_error(argc, argv);
	fill_stack(argc, argv, &stack_a);
	//swap(&stack_a, 'a');
	print_stack(stack_a);
	//printf("%d\n", stack_a->content + stack_a->next->content);
	free_list(stack_a);
	return (0);
}
