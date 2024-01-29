/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 07:48:13 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/29 14:45:22 by jedusser         ###   ########.fr       */
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
	int				chunk_end;
	struct s_list	*next;
	struct s_list	*previous;
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
	void		sort_three(t_list**stack_b);
	void		print_error(int argc, char **argv);
	void			get_chunks_indexes(t_list **stack_b);
	void		ft_lstadd_back(t_list **lst, t_list *new);
	void		swap_nodes_val(t_list *node1, t_list *node2);
	void		fill_stack(int argc, char **argv, t_list **lst);
	void		chunks_fusion(t_list **stack_a, t_list **stack_b);
	void		segmentAndPush(t_list** stack_a, t_list** stack_b) ;
	void 		segment_sort_and_push(t_list **stack_a, t_list **stack_b);
	t_list		*ft_lstnew(int content);
	t_list		*ft_lstlast(t_list *lst);

#endif
