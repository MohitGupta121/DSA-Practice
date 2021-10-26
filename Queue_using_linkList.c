#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* Next;
};

    struct Node* f = NULL;
    struct Node* r = NULL;

void linkedListTraversal(struct Node* ptr){
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("The element is: %d\n", ptr->data);
        ptr = ptr->Next;
    }
}

void enqueue(int val){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("The Queue is Full\n");
    }else
    {
        n->data = val;
        n->Next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }else
        {
            r->Next = n;
            r = n;
        }        
    }    
}

int dequeue(){
    int val = -1;
    struct Node * ptr = f;
    if (f == NULL)
    {
        printf("The Queue is Empty\n");
    }else
    {
        f = f->Next;
        val = ptr->data;
        free(ptr);
    }
    return val;   
    
}

int main()
{

    linkedListTraversal(f);
    printf("Dequeuing element %d\n", dequeue());
    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);
    
    linkedListTraversal(f);

    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    linkedListTraversal(f);

    
    return 0;
}