/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 07:48:13 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/25 15:02:02 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	struct s_list	*previous;

}	t_list;

t_list		*ft_lstnew(int content);
void		ft_lstadd_back(t_list **lst, t_list *new);
t_list		*ft_lstlast(t_list *lst);
long long	ft_atoi(const char *str);
void		fill_stack(int argc, char **argv, t_list **lst);
int			check_args(int argc, char **argv);
int			ft_is_signeddigit(char c);
void		print_error(int argc, char **argv);
void		free_list(t_list *stack);
int			swap(t_list **stack, char stack_name);


#endif
