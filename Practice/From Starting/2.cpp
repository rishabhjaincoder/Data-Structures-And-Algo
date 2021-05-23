//  program to insert an element on a specific index in an array
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

int insertion(int arr[], int element, int size, int capacity, int index)
{
    if (capacity <= size)
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
    int returnVal = 0;
    int capacity = 100;
    int arr[100] = {11, 44, 21, 87, 45};
    int size = 5;
    int element = 100;
    int index = 2;
    cout << "Array before insertion\n"
         << endl;
    Traversal(arr, size);

    returnVal = insertion(arr, element, size, capacity, index);
    if (returnVal == 1)
    {
        size++;
        cout << "Element added successfully! \n";
        cout << "Array after insertion\n"
             << endl;
        Traversal(arr, size);
    }
    else if (returnVal == -1)
    {
        cout << "Array is already full\n";
    }
    return 0;
}