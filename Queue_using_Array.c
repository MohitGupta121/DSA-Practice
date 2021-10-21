#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int f;
    int r;
    int * arr;
};

int isFull(struct Queue *q){
    if (q->r == q->size -1)
    {
        return 1;
    }
    return 0;   
}

int isEmpty(struct Queue *q){
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
       
    
}

void enqueue(struct Queue* q, int val){
    if (isFull(q))
    {
        printf("The Queue is Full\n");
    }else
    {
        q->r++;
        q->arr[q->r]= val;
        printf("Queue is enqued sucessfully by element: %d \n", val);
    }    
}

int dequeue(struct Queue *q){
    int a = -1;
    if (isEmpty(q))
    {
        printf("The queue is empty\n");
    }else
    {
        q->f++;
        a = q->arr[q->r];
    }
    return a;   
}



int main()
{
    struct Queue q;
    q.size = 10;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    // Enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1); 
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q)); 
    enqueue(&q, 45);
    enqueue(&q, 45);
    enqueue(&q, 45);
 
    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
    
    return 0;
}