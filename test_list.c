#include "push_swap.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *list;

    list = malloc(sizeof(t_list));
    if (list == NULL)
        return (NULL);
    list->next = NULL;
    list->content = content; // Affectez la valeur sans cast void* si c'est un entier
    return (list);
}

// int main(void)
// {
//     int value = 5;
//     t_list *myList = ft_lstnew(&value); // Passez l'adresse de la variable int

//     printf("%d\n", *((int*)myList->content)); // Utilisez le cast uniquement pour l'impression

//     return (0);
// }
