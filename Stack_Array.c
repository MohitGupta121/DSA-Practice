#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int * arr;
};

int isFull(struct Stack * ptr){
    if (ptr->top == ptr->size -1)
    {
        printf("Stack Overflow");
        return 1;
    }
    
}

int isEmpty(struct Stack* ptr){
    if(ptr->top == -1){
        printf("Stack is Underflow");
        return 1;
    }
}


int main()
{
    struct Stack * s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    isEmpty(s);
    isFull(s);



    
    return 0;
}