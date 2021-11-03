#include <stdio.h>

void printArray(int *A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }    
    printf("\n");
}

void insertionSort(int *A, int n){
    int key, j;
    // Loop for Passes
    for (int i = 1; i <= n-1; i++)
    {
        key = A[i];
        j = i-1;

        // Loop for each Passes
        while (j>=0 && A[j]>key)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main()
{
    int A[] = {12,5,14,55,3,7,10,74,20,11};
    int n = 10;
    printArray(A, n);
    insertionSort(A, n);
    printArray(A, n);
    return 0;
}