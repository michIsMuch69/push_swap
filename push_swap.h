/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dusserrejean-michel <dusserrejean-miche    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 07:48:13 by jedusser          #+#    #+#             */
/*   Updated: 2024/02/01 10:25:30 by dusserrejea      ###   ########.fr       */
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
}	t_list;

	int			pop(t_list** top_ref); 
	int			ft_lstsize(t_list *lst);
	int			ft_atoi(const char *str);
	int			ft_is_signeddigit(char c);
	int			check_args(int argc, char **argv);
	int			swap(t_list **stack, char stack_name);
	int 		rotate(t_list **stack, char stack_name);
	int			reverse_rotate(t_list **stack, char stack_name);
	int			push(t_list **from_stack, t_list **to_stack, char stack_name);
	void		free_list(t_list *stack);
	void 		sort_chunk(t_list **chunk);
	void		sort_three(t_list **stack_b);
	void		print_error(int argc, char **argv);
	void		ft_lstadd_back(t_list **lst, t_list *new);
	void		swap_nodes_val(t_list *node1, t_list *node2, char stack_name);
	void		fill_stack(int argc, char **argv, t_list **lst);
	void 		segment_sort_and_push(t_list **stack_a, t_list **stack_b);
	t_list		*ft_lstnew(int content);
	t_list		*ft_lstlast(t_list *lst);
	void		push_val(t_list** top_ref, int new_value);
	void		fusion(t_list **stack_a, t_list **stack_b);



#endif
