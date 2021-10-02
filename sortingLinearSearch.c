#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    printf("The element not found");
}

int main()
{
    int arr[] = {1,51,54,45,25,75,33,744,8514,85,94,37,5287};
    int size = sizeof(arr)/sizeof(int);
    int element;
    printf("Enter the element you want to found\n");
    scanf("%d",&element);
    int searchIndex =  linearSearch(arr,size,element);
    printf("The element %d is found at index %d", element, searchIndex);

    return 0;
}