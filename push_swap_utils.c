/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:18:07 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/25 15:45:40 by jedusser         ###   ########.fr       */
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
