#include <stdio.h>
#include <stdlib.h>

struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tsize, int usize){
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}

void showArray(struct myArray *a){

    for (int i = 0; i < a->used_size; i++){
        printf("%d\n", (a->ptr)[i]);
    }
}

void setArray(struct myArray *a){
    int n;
    for (int i = 0; i < a->used_size; i++){
        printf("Enter the element %d \t", i);
        scanf("%d", &n);
        (a->ptr)[i] =n;

    }
}


int main() {
	struct myArray marks;
	createArray(&marks, 10, 2);
    setArray(&marks);
    printf("Now show array\n");
	showArray(&marks);
	return 0;
}