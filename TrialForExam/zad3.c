#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COUNT 5
typedef struct node{
    int data;
    struct node* next;
}node_t;
void push(node_t **head, int value)
{
    node_t *newNode = (node_t *)malloc(sizeof(node_t));
    newNode->data = value; 
    newNode->next = *head;
    *head = newNode;
}
int findRandom(int min, int max)
{
    return min + rand() % (max+1 - min);
}
void printList(node_t *head)
{
    node_t *current = head;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}
int countNumberEnd0(node_t *head)
{
    int count=0;
    node_t *current = head;
    while (current != NULL)
    {
        if(current->data%10==0){
            count++;
        }
        current = current->next;
    }
    return count;
}
int countBits(node_t *head)
{
    int sum=0;
    node_t *current = head;
    while (current != NULL)
    {
        int count=0;
        while(current->data){
            if(current->data & 1){
                count++;      
            }
            current->data>>=1;
        }
        sum+=count;
        current = current->next;
    }
    return sum;
}
void listFree(node_t **list){
    node_t *current=*list,*prev;
    while(current){
        prev=current;
        current=current->next;
        free(prev);
    }
    *list=NULL;
}
int main(){
    srand(time(NULL));
    node_t *head=NULL;
    for(int i=0;i<COUNT;i++){
        push(&head,findRandom(0,100));
    }
    printList(head);
    printf("Count of numbers end with zero = %d\n",countNumberEnd0(head));
    printf("Count of bits '1' in list = %d\n",countBits(head));
    listFree(&head);
    return 0;
    //end for 1.30
}