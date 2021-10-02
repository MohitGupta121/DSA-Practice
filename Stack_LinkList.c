#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void travasal(struct Node *top)
{
    while (top != NULL)
    {
        printf("The element is %d\n", top->data);
        top = top->next;
    }
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int val)
{
    if (isFull(top))
    {
        printf("The stack Overflow\n");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = val;
        n->next = top;
        top = n;
        return n;
    }
}

int pop(struct Node **top)
{
    if (isEmpty(*top))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        struct Node *n = *top;
        *top = (*top)->next;
        int val = n->data;
        free(n);
        return val;
    }
}

int peek(int pos)
{
    struct Node *ptr = top;
    for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }

    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}

int stackTop(struct Node *top)
{
    return top->data;
}

int stackBottom(struct Node *top)
{
    struct Node* ptr = top;
    while (ptr->next != NULL)
    {
        ptr=ptr->next;
    }
    return ptr->data;      

}

int main()
{

    // --> Or we can make TOP as a Global variable to Avoid the use as an address like * and &
    top = push(top, 45);
    top = push(top, 15);
    top = push(top, 456);
    top = push(top, 412);

    // travasal(top);

    // int element = pop(&top);
    // printf("\nThe poped element is %d\n\n", element);

    // travasal(top);

    // for (int i = 1; i <= 4; i++)
    // {
    //     printf("Value at position %d is: %d\n", i, peek(i));
    // }

    int element = stackBottom(top);

    printf("Bottom element is %d\n", element);
    // printf("Value at Stack TOP is: %d\n", stackTop(top));

    return 0;
}