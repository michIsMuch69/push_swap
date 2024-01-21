#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"
#include "libft.h"

typedef struct Node {
    void* data;
    struct Node* next;
} Node;

void addNode(Node** head, char* data) 
{
    Node* newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) 
        *head = newNode;
    else 
    {
        Node* current = *head;
        while (current->next != NULL) 
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

void treat_args(int argc, char* argv[]) 
{
    Node    *head;
    Node    *current;
    int     i;

    head = NULL;
    i = 1;
    for (int i = 1; i < argc; i++)
    while (i < argc) 
    {
        addNode(&head, argv[i]);
        i++;
    }
    current = head;
    while (current != NULL) {
        printf("%d\n", *((int *)current->data));
        current = current->next;
    }
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }
}

int main(int argc, char **argv)
{
    treat_args(argc, argv);
    return (0);
}