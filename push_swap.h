/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 07:48:13 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/24 10:01:40 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct node
{
	int 		*content;
	struct node *next;
}	t_node;

typedef struct stack
{
	t_node *top;
}	t_stack;

void	*init_stack();

#endif
