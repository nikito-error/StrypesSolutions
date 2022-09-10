#ifndef _checklist_
#define _checklist_
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct node
{
    int data;
    struct node *next;
} node_t;

void printList(node_t *head);
void push(node_t **head, int value); // add elements
void listFree(node_t **list);        // bonus function
uint64_t *findMax(node_t *head);
int countBits(node_t *head);
#endif