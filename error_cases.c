/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:20:02 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/23 14:37:45 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_num(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] >= 48 && str[i] <= 57 || str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	return (1);
}

#include <stdio.h>
#include <string.h>

int	check_duplicate_args(int argc, char **argv) 
{
	int	i;
	int j;

	i = 0;
	j = i + 1;
    while (i < argc)
	{
        while (j < argc) {
            if (ft_strcmp(argv[i], argv[j]) != 0) 
			{
				return (1)	;
            }
			j++;
        }
		i++;
    }
	return (0);
}
