#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkListTravasal(struct Node *head)
{
    struct Node *ptr = head;

    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *insertAtHead(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
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
    fifth->next = head;

    printf("Circular LinkList before Insertion is \n");
    linkListTravasal(head);

    head = insertAtHead(head,100);
    head = insertAtHead(head,200);

    printf("Circular LinkList after Insertion is \n");
    linkListTravasal(head);
    return 0;
}