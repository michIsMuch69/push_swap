/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 08:01:35 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/23 14:38:54 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct node
{
	int			*data;
	struct node	*next;
}	t_node;

long long		ft_atoi(const char *str);
int				ft_is_num(char *str);
void			ft_putchar(char c);
char			*ft_putstr(char *str);
int				print_error(int argc, char **argv);
void			fill_args(int argc, char **argv);
int				ft_strcmp(char *s1, char *s2);
int				check_duplicate_args(int argc, char **argv);


#endif
