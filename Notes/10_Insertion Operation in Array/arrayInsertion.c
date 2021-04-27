#include <stdio.h>

void display(int arr[], int n)
{
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    // code for Insertion
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int capacity = 100;
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 1;
    printf("\nArray Traversal before insertion\n");
    display(arr, size);
    int result = indInsertion(arr, size, element, capacity, index);
    if (result == 1)
    {
        size += 1;
        printf("\nSuccessfully inserted element %d at index %d \n",element, index);
        display(arr, size);
    }
    else if (result == -1)
    {
        printf("Array is Full, you cannot insert!");
    }
    return 0;
}