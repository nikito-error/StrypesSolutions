#include <stdio.h>
#include<stdlib.h>
typedef struct node{
 int data;
 struct node* next;
}node_t;
void push(node_t** head,int value){
    node_t *newNode=(node_t *)malloc(sizeof(node_t));
    newNode->data=value;//(*newNode).data;
    newNode->next=*head;
    *head=newNode;
}
void printList(node_t *head){
node_t* current=head;
while(current!=NULL){
    printf("%d\n",current->data);
    current=current->next;
}
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
    node_t* head=NULL;//tova e vajna inicializaciq
    push(&head,10);
    push(&head,20);
    push(&head,30);
    push(&head,40);
    printList(head);
    listFree(&head);
    if(head==NULL){
        printf("List is empty");
    }
    return 0;
}