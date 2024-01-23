/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 08:00:32 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/23 14:10:28 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_node(t_node **head, int data)
{
	t_node	*newnode;
	t_node	*current;

	newnode = malloc(sizeof(t_node));
	newnode->data = malloc(sizeof(int));
	*((int *)newnode->data) = data;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newnode;
	}
}

void	fill_args(int argc, char **argv)
{
	t_node	*head;
	t_node	*temp;
	t_node	*current;
	int		i;
	int		arg_as_int;

	head = NULL;
	i = 1;
	while (i < argc)
	{
		arg_as_int = ft_atoi(argv[i]);
		//test int min max grace a atoi en long long
		add_node(&head, arg_as_int);
		i++;
	}
	current = head;
	while (current != NULL)
	{
		printf("%d\n",*current->data);
		current = current->next;
	}
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->data);
		free(temp);
	}
}
