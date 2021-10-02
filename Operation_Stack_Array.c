#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("The stack is Empty");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *ptr, int postion)
{
    int arrInd = ptr->top - postion + 1;
    if (arrInd < 0)
    {
        printf("The postion of the Stack is not Valid");
    }
    else
    {
        return ptr->arr[arrInd];
    }
}

int stackTop(struct stack* ptr){
    return ptr->arr[ptr->top];
}

int stackBottom(struct stack*ptr){
    return ptr->arr[0];
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 22;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("Stack has been created successfully\n");

    push(s, 1);
    push(s, 23);
    push(s, 99);
    push(s, 75);
    push(s, 3);
    push(s, 64);
    push(s, 57);
    push(s, 46);
    push(s, 89);
    push(s, 6);  // ---> Pushed 10 values
    push(s, 46); // Stack Overflow since the size of the stack is 10
    push(s, 100);

    // printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    // printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!
    // printf("Popped %d from the stack\n", pop(s)); // --> Last in first out!

    for (int i = 1; i <= s->top + 1; i++)
    {
        printf("The value at index %d of stack is %d\n", i, peek(s, i));
    }

    printf("The Top element of stack is %d\n", stackTop(s));
    printf("The Bottom element of stack is %d\n", stackBottom(s));


    return 0;
}