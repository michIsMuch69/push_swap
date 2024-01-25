/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:28:50 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/25 12:27:54 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack)
{
	t_list	*current;

	current = stack;
	while (current != NULL)
	{
		printf("%d\n", current->content);
		current = current->next;
	}
}
void	fill_stack(int argc, char **argv, t_list **stack)
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
			new_node = ft_lstnew(new_value); //atoi(argv[i]) en paramettrede lstnew ?// conditionner lstnew au retour de l'atoi
			ft_lstadd_back(stack, new_node);
			i++;
		}
	}
}
int	main(int argc, char **argv)
{
	t_list	*stack;
	
	stack = NULL;
	print_error(argc, argv);
	fill_stack(argc, argv, &stack);	
	print_stack(stack);
	//dellist pour free correctement.
	free(stack);
	return (0);
}
