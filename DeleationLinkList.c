#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkListTravasal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:- %d \n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1:- Delete first element from LinkList
struct Node *deleteFirstElement(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case 2:- Delete element at any index from LinkList
struct Node *deleteAnyElement(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// Case 3:- Delete last element from LinkList
struct Node *deleteLastElement(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

// Case 4:- Delete element with a given Value from LinkList
struct Node *deleteGivenElement(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }

    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    // Allocate memory for node in the linkList in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second node
    head->data = 45;
    head->next = second;

    // Link second and third node
    second->data = 74;
    second->next = third;

    // Link third and fourth node
    third->data = 54;
    third->next = fourth;

    // Link fourth and fifth node
    fourth->data = 24;
    fourth->next = fifth;

    // Terminate the Link at fifth
    fifth->data = 97;
    fifth->next = NULL;

    printf("LinkList before Deletion\n");
    linkListTravasal(head);

    // head = deleteFirstElement(head); // Case1 :- Deleting 1st element
    // head = deleteAnyElement(head,2); // Case-4 :- Deleting element at a given index
    // head = deleteLastElement(head); // Case-3 :- Deleting Last element
    // head = deleteGivenElement(head,74); // Case-4 :- Deleting element with a given value

    printf("LinkList after Deletion\n");
    linkListTravasal(head);

    return 0;
}