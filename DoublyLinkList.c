#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void doublyLinkListTravasal(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *p = NULL;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }

    while (p != NULL)
    {
        printf ("%d\n", p->data);
        p = p->prev;
    }
    
}

int main()
{

    struct Node *N1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *N2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *N3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *N4 = (struct Node *)malloc(sizeof(struct Node));

    // First Node:-
    N1->data = 23;
    N1->next = N2;
    N1->prev = NULL;

    // Second Node:-
    N2->data = 34;
    N2->next = N3;
    N2->prev = N1;

    // First Node:-
    N3->data = 56;
    N3->next = N4;
    N3->prev = N2;

    // First Node:-
    N4->data = 52;
    N4->next = NULL;
    N4->prev = N3;

    doublyLinkListTravasal(N1);

    return 0;
}