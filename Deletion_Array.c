#include <stdio.h>
#include <stdlib.h>

void showArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertArray(int arr[], int size, int capacity, int index, int element){

    if (size>capacity)
    {
        return -1;
    }
    
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}

int deleteArray(int arr[], int size, int index){

    if (index>size)
    {
        return -1;
    }
    
    for (int i = index; i <= size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    return 1;
}


int main()
{

    int arr[100]={5,12,15,20,30};
    int size=5, capacity=100, index=0, element=16;

    showArray(arr, size);
    // insertArray(arr,size,capacity,index,element);
    
    // size +=1;

    deleteArray(arr,size,index);
    size -=1;

    showArray(arr,size);

    return 0;
}