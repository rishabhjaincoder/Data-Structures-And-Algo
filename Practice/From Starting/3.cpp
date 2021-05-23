//  program to delete an element from specific position in an array
#include <iostream>
#include <stdlib.h>

using namespace std;

void Traversal(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        cout << "element at index " << i << " =>  " << arr[i] << endl;
    }
    cout << endl;
}

int deletion(int arr[], int size, int capacity, int index)
{
    if (index >= size)
    {
        return -1;
    }
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    return 1;
}

int main()
{
    int returnVal = 0;
    int capacity = 100;
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;
    int index = 2;
    cout << "Array before deletion\n"
         << endl;
    Traversal(arr, size);

    returnVal = deletion(arr, size, capacity, index);
    if (returnVal == 1)
    {
        size--;
        cout << "Element removed successfully! \n";
        cout << "Array after deletion\n"
             << endl;
        Traversal(arr, size);
    }
    else if (returnVal == -1)
    {
        cout << "Array is Empty\n";
    }
    return 0;
}