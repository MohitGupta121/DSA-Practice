#include <stdio.h>
#include <stdlib.h>

void displayArray(int arr[], int n)
{
    // Travesal of Array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertElement(int arr[], int size, int element, int capacity, int index)
{
    if (size > capacity)
    {
        printf("The is is already Full");
        return -1;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        return 1;
    }
}

int main()
{
    int arr[100] = {1, 4, 6, 13, 32, 50};
    int size = 6, element = 45, index = 3;
    displayArray(arr, size);
    insertElement(arr, size, element, 100, index);
    size += 1;
    displayArray(arr, size);

    return 0;
}