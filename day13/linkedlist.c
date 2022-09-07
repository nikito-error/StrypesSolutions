#include<stdio.h>
#include<stdlib.h>
//list size();
//maxNum() in list 
//averageNum() in list;
// two pointers ** when we change head -_-
typedef struct node{
 int data;
 struct node* next;
}node_t;
size_t listsize(node_t *head){
size_t count=0;
node_t *current=head;
while(current!=NULL){
    count++;
    current=current->next;
}
return count;
}
int maxNum(node_t *head){
node_t *current=head;
int max_num=current->data;
while(current!=NULL){
    if(max_num<current->data){
        max_num=current->data;
    }
    current=current->next;
}
return max_num;
}
double Average(node_t *head){
double sum=0;
int count=0;
node_t *current=head;
while(current!=NULL){
    sum+=current->data;
    count++;
    current=current->next;
}
sum=sum/count;
return sum;
}

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
   /* listFree(&head);
    if(head==NULL){
        printf("List is empty");
    }
    */
    printf("List size is %d\n",listsize(head));
    printf("Max num= %d\n",maxNum(head));
    printf("Average sum= %.2lf\n",Average(head));
    listFree(&head);
    if(head==NULL){
    printf("List is empty\n");
    }
    return 0;
}