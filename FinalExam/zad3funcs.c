#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node_t;
int countBits(node_t *head)
{
    int sum = 0;
    node_t *current = head;
    while (current != NULL)
    {
        int count = 0;
        while (current->data)
        {
            if (current->data & 1)
            {
                count++;
            }
            current->data >>= 1;
        }
        sum += count;
        current = current->next;
    }
    return sum;
}
void printList(node_t *head)
{
    printf("Print List:\n");
    node_t *current = head;
    while (current != NULL)
    {
        printf("%" PRIu64 "\n", (uint64_t)current->data);
        current = current->next;
    }
}
uint64_t *findMax(node_t *head)
{
    node_t *current = head;
    uint64_t *max = (uint64_t *)&current->data;
    while (current != NULL)
    {
        if (current->data > *max)
        {
            max = (uint64_t *)&current->data;
        }
        current = current->next;
    }
    return max;
}
void push(node_t **head, int value)
{
    node_t *newNode = (node_t *)malloc(sizeof(node_t));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}
void listFree(node_t **list)
{
    node_t *current = *list, *prev;
    while (current)
    {
        prev = current;
        current = current->next;
        free(prev);
    }
    *list = NULL;
}