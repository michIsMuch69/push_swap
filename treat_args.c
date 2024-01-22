#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

typedef struct Node {
    void* data;
    struct Node* next;
} Node;

void addNode(Node** head, int data) 
{
    Node* newNode;
    Node* current;
    newNode = malloc(sizeof(Node));
    newNode->data = malloc(sizeof(int));
    *((int *)newNode->data) = data;
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

void treat_args(int argc, char **argv) 
{
    Node    *head; 
    Node    *current;
    int     i;
    int     arg_as_int;

    head = NULL;
    i = 1;

    while (i < argc) 
    {
        arg_as_int = atoi(argv[i]);
        addNode(&head, arg_as_int);
        i++;
    }

    current = head;

    while (current != NULL) 
    {
        printf("%d\n", *((int *)current->data));
        current = current->next;
    }

    while (head != NULL) 
    {
        Node* temp = head;
        head = head->next;
        free(temp->data);
        free(temp);
    }
}

int main(int argc, char **argv)
{
    treat_args(argc, argv);
    return (0);
}
