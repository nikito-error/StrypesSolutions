#include <stdio.h>
#define MAX 5
int arr[MAX];
int top = -1;
int bot = -1;
int isEmpty();
int isFull();
int push(int nNewValue);
int pop();
int display();
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull()
{
    if ((top == 0 && bot == MAX - 1) || (top == bot + 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int push(int nNewValue)
{
    if (isFull() == 1)
    {
        printf("Queue is FULL \n");
        return 1;
    }
    if (top == -1)
    {
        top = 0;
        bot = 0;
    }
    else
    {
        if (bot == MAX - 1)
            bot = 0;
        else
            bot = bot + 1;
    }
    arr[bot] = nNewValue;
    return 0;
}
int pop()
{
    if (isEmpty() == 1)
    {
        printf("Queue is Empty\n");
        return 1;
    }
    printf("Element deleted from queue is : %d\n", arr[top]);
    if (top == bot)
    {
        top = -1;
        bot = -1;
    }
    else
    {
        if (top == MAX - 1)
            top = 0;
        else
            top = top + 1;
    }
    return 0;
}
int display()
{
    int front_pos = top, rear_pos = bot;
    if (isEmpty() == 1)
    {
        printf("Queue is Empty\n");
        return 1;
    }
    printf("Queue elements :\n");
    if (front_pos <= rear_pos)
        while (front_pos <= rear_pos)
        {
            printf("%d ", arr[front_pos]);
            front_pos++;
        }
    else
    {
        while (front_pos <= MAX - 1)
        {
            printf("%d ", arr[front_pos]);
            front_pos++;
        }
        front_pos = 0;
        while (front_pos <= rear_pos)
        {
            printf("%d ", arr[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
    return 0;
}
int main()
{
    int choice, nNewValue;
    do
    {
        printf("\n1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Input the element for insertion in queue : ");
            scanf("%d", &nNewValue);
            push(nNewValue);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("Wrong choice\n");
        }
    } while (choice != 4);
    return 0;
}