/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fusion.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-micheldusserre <jean-micheldusserr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:40:48 by jean-michel       #+#    #+#             */
/*   Updated: 2024/02/06 18:41:12 by jean-michel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// fonction fusion(stack_a, stack_b)
//     tant que stack_b n'est pas vide
//         élément_b = sommet(stack_b)
        
//         si stack_a est vide ou élément_b < sommet(stack_a)
//             push(stack_b vers stack_a)
//         sinon
//             position = trouverPositionInsertion(stack_a, élément_b)
//             insérerÀPosition(stack_a, élément_b, position)
//             retirerSommet(stack_b)
//         fin si
//     fin tant que
// fin fonction

// fonction trouverPositionInsertion(stack_a, élément_b)
//     position = 0
//     courant = sommet(stack_a)
    
//     tant que courant n'est pas nul et élément_b > contenu(courant)
//         courant = élémentSuivant(courant)
//         position += 1
//     fin tant que
    
//     retourner position
// fin fonction

// fonction insérerÀPosition(stack_a, élément_b, position)
//     si position est 0
//         push(élément_b vers stack_a)
//     sinon
//         précedent = obtenirÉlémentÀ(stack_a, position - 1)
//         suivant = élémentSuivant(précedent)
//         nouveau = créerNouveauNœud(élément_b)
//         fixerSuivant(précedent, nouveau)
//         fixerSuivant(nouveau, suivant)
//     fin si
// fin fonction
