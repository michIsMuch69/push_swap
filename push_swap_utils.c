/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:18:07 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/29 15:49:25 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_signeddigit(char c)
{
	if (c >= 48 && c <= 57 || c == 45 || c == 43)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int					i;
	long long			res;
	int					sign;

	i = 0;
	res = 0;
	sign = 1;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i] != '\0')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	res = sign * res;
	if (res > 2147483647 || res < -2147483648)
		return (-1);
	return ((int)res);
}
void	swap_nodes_val(t_list *node1, t_list *node2)
{
	int	temp;
	if (node1 == NULL || node2 == NULL)
		exit(EXIT_FAILURE);
	temp = node1->content;
	node1->content = node2->content;
	node2->content = temp;
}
int	swap(t_list **stack, char stack_name)
{
	t_list	*first;
	t_list	*second;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return (1);
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	
	if (stack_name == 'a')
		printf("sa\n");
	else if (stack_name == 'b')
		printf("sb\n");
	return (0);
}

