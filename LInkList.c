#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkListTravasal(struct Node* ptr){
    while (ptr != NULL)
    {
        printf("Element:- %d \n", ptr->data);
        ptr = ptr->next;

    }
    
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

    linkListTravasal(head);

    return 0;
}