/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrong_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:27:25 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/23 14:42:21 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_error(char *str)
{
	if (ft_is_num(str) == 1)
	{
		return (1);
	}
	return (0);
}

int	print_error(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			while (argv[i][j] != '\0')
			{
				if (check_error(argv[i]) == 1 || check_duplicate_args(argc, argv) == 1)
				{
					ft_putstr("Error\n");
					return (1);
				}
				j++;
			}
			i++;
		}
	}
	return (0);
}
