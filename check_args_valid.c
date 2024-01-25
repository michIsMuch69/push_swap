/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_valid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:23:54 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/25 15:30:38 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_args(int argc, char **argv)
{
	int	i;
	int	j;
	long long a;

	i = 1;
	if (argc == 1)
		return (1);
	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (ft_is_signeddigit(argv[i][j]) == 0)
					return (1);
				if (ft_atoi(argv[i]) == -1)
					return (1);
				j++;
			}
			i++;
		}
	}
	return (0);
}

void	print_error(int argc, char **argv)
{
	if (check_args(argc, argv) == 1)
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
}
