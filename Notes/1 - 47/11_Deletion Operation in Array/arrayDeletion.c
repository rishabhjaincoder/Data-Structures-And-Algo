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

int indDeletion(int arr[], int size, int index)
{
    // code for Deletion
    if (index >= size)
    {
        return -1;
    }
    for (int i = index; i< size-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return 1;
}

int main()
{
    int capacity = 100;
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, index = 2;
    printf("\nArray Traversal before Deletion\n");
    display(arr, size);
    int result = indDeletion(arr, size, index);
    if (result == 1)
    {
        size -= 1;
        printf("\nSuccessfully Deleted at index %d \n", index);
        display(arr, size);
        printf("\nsize of array is now %d",size);
    }
    else if (result == -1)
    {
        printf("Cannot delete element outside the array!");
    }
    return 0;
}