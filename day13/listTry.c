#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
/*
typedef struct node{
    int data;
    struct node *next;
}node_t;
*/
int main(){
    struct node n1;
    struct node n2;
    struct node n3;
    n1.data=10;
    n2.data=20;
    n3.data=30;
    n1.next=&n2;
    n2.next=&n3;
    n3.next=NULL;
    printf("%d\n",(*(n1.next)).data);//vtoriq element izkarva

    return 0;
}