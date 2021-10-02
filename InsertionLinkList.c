#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void linkListTravasal(struct Node* ptr){
    while (ptr!=NULL)
    {
        printf("Element:- %d\n", ptr->data);
        ptr=ptr->next;
    }
    
}

// Case 1 (Insertion at first)
struct Node* insertAtFirst(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

//Case 2 (Insertion in between)
struct Node * insertInBetween(struct Node* head, int data, int index){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    ptr->data = data;

    int i=0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Case-3 (Insert at End)
struct Node * insertAtEnd(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// Case-3 (Insert after a Node or a given pointer)
struct Node* insertAfterNode(struct Node*head, int data, struct Node* prevNode){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;

    ptr->next=prevNode->next;
    prevNode->next=ptr;
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

    printf("LinkList before Insertion is \n");
    linkListTravasal(head);
    
    // head = insertAtFirst(head,100);
    // head = insertInBetween(head,100,2);
    // head = insertAtEnd(head,100);
    head = insertAfterNode(head,100,third);
    
    printf("LinkList after Insertion is \n");
    linkListTravasal(head);
    return 0;
}