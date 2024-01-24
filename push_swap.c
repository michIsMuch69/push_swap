/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:28:50 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/24 15:45:48 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack)
{
	t_list	*current;

	current = stack;
	while (current != NULL)
	{
		printf("%d", current->content);
		current = current->next;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	t_list	*stack;
	t_list	*new_node;
	int		i;
	int		new_value;

	stack = NULL;
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			new_value = atoi(argv[i]);
			new_node = ft_lstnew(new_value);
			ft_lstadd_back(&stack, new_node);
			i++;
		}
	}
	print_stack(stack);
	free(new_node);
	free(stack);
	return (0);
}
