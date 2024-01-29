/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:18:07 by jedusser          #+#    #+#             */
/*   Updated: 2024/01/29 15:25:45 by jedusser         ###   ########.fr       */
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
void	get_chunks_indexes(t_list **stack_b)
{
	int	i;
	i = 0;
	t_list *current;
	current = *stack_b;
	while(current != NULL)
	{
		i++;
		if (i % 3 == 0)
			current->chunk_end = 1;
		else
			current->chunk_end = 0;
		current = current->next;
	}
}


// void chunks_fusion(t_list **stack_a, t_list **stack_b) 
// {
//     t_list *current = *stack_b;
//     int isFirstChunkElement = 1;

//     while (current != NULL)
// 	 {
//         if (isFirstChunkElement || (!*stack_a || current->content < (*stack_a)->content)) 
// 		{
//             push(stack_a, stack_b, 'b');
//             isFirstChunkElement = 0;
//         } 
// 		else
// 		 {
//             int rotations = 0;
//             while (*stack_a && current->content > (*stack_a)->content) 
// 			{
//                 rotate(stack_a, 'a');
//                 rotations++;
//             }
//             push(stack_a, stack_b, 'b');
//             while (rotations--) 
// 			{
//                 reverse_rotate(stack_a, 'a');
//             }
//         }
//         if (*stack_b != NULL && (*stack_b)->chunk_end) 
// 		{
//             isFirstChunkElement = 1;
//         }
//         current = *stack_b;
//     }
// }



// void chunks_fusion(t_list **stack_a, t_list **stack_b) {
//     t_list *current = *stack_b;

//     while (current != NULL) {
//         // Faites la fusion en utilisant l'élément actuel de stack_b
//         // ... (logique de fusion) ...

//         if (current->chunk_end) {
//             // Logique spéciale pour gérer la fin d'un chunk
//             // Par exemple, réinitialiser certaines variables ou faire des ajustements avant de traiter le prochain chunk
//         }

//         // Passe au prochain élément pour le traitement, en tenant compte de la possible modification de *stack_b par push
//         current = *stack_b;
//     }
// }




// Fonction marquer_chunks(stack_b)
//     Initialiser compteur à 0
//     Pour chaque élément dans stack_b
//         Incrémenter compteur
//         Si compteur % 3 == 0
//             Marquer cet élément comme fin de chunk
//         Fin Si
//     Fin Pour
// Fin Fonction

// Fonction tri_fusion_chunks(stack_b, stack_a)
//     Tant que stack_b n'est pas vide
//         Identifier le premier chunk dans stack_b
//         Si un deuxième chunk est présent dans stack_b
//             Comparer les éléments de tête des deux chunks
//             Pousser l'élément le plus petit dans stack_a
//         Sinon
//             Pousser l'élément restant dans stack_a
//         Fin Si
//         Répéter jusqu'à ce que tous les chunks soient traités
//     Fin Tant que
// Fin Fonction
