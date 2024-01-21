#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

typedef struct Node {
    void* data;
    struct Node* next;
} Node;

// Fonction pour ajouter un nœud à la fin de la liste chaînée
void addNode(Node** head, int data) 
{
    Node* newNode;
    Node* current;
    newNode = malloc(sizeof(Node));
    newNode->data = malloc(sizeof(int));  // Allocation mémoire pour stocker l'entier
    *((int *)newNode->data) = data;       // Stockage de l'entier dans le nœud
    newNode->next = NULL;

    if (*head == NULL) 
        *head = newNode;
    else 
    {
        current = *head;
        while (current->next != NULL) 
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Fonction pour traiter les arguments passés au programme
void treat_args(int argc, char* argv[]) 
{
    Node    *head;       // Tête de la liste chaînée
    Node    *current;    // Pointeur pour parcourir la liste
    int     i;
    int     arg_as_int;

    head = NULL;         // Initialisation de la liste vide
    i = 1;

    // Parcours des arguments passés au programme
    while (i < argc) 
    {
        arg_as_int = atoi(argv[i]);  // Convertir l'argument en entier
        addNode(&head, arg_as_int);      // Ajout de l'entier à la liste chaînée
        i++;
    }

    current = head;

    // Affichage des éléments de la liste chaînée
    while (current != NULL) 
    {
        printf("%d\n", *((int *)current->data));
        current = current->next;
    }

    // Libération de la mémoire allouée pour la liste chaînée
    while (head != NULL) 
    {
        Node* temp = head;
        head = head->next;
        free(temp->data);  // Libération de la mémoire allouée pour les données
        free(temp);
    }
}

// Fonction principale du programme
int main(int argc, char **argv)
{
    treat_args(argc, argv);  // Appel de la fonction pour traiter les arguments
    return (0);
}
