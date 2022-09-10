#include "zad3.h"
#define COUNT 5
// main class
//  gcc zad3.c zad3funcs.c -o zad3
//./zad3
int main()
{
    srand(time(NULL));
    node_t *head = NULL;
    for (int i = 0; i < COUNT; i++)
    {
        push(&head, (uint64_t)rand());
    }
    printList(head);
    printf("Max num = %" PRIu64 "\n", *findMax(head));
    printf("Count of bits '1' in list = %d\n", countBits(head));
    listFree(&head);
    return 0;
}