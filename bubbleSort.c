#include <stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubbleSort(int *A, int n){
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        printf("Working on the pass number %d\n", i+1); // For Comparission in each case
        for (int j = 0; j < n-1-i; j++)
        {
            if (A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
            
        }
        
    }
}
void bubbleSortAdaptive(int *A, int n){
    int temp;
    int isSorted = 1;
    for (int i = 0; i < n; i++)
    {
        printf("Working on the pass number %d\n", i+1); // For Comparission in each case
        for (int j = 0; j < n-1-i; j++)
        {
            if (A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted =0;
            }
            
        }
        if (isSorted)
        {
            return;
        }
        
    }
    
}
int main()
{
    int A[] = {2,18,41,1,50,3,74,11,20,40};
    // int A[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    printArray(A, n); // Printing Array before sorting
    bubbleSort(A, n);  // function to sort array
    printArray(A,n); // Printing Array after sorting
    
    return 0;
}