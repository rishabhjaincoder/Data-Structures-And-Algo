// binary search
#include <iostream>
using namespace std;

int binarySearch(int arr[], int element, int size)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(int);
    int element = 8;

    int index = binarySearch(arr, element, size);
    if (index >= 0)
    {
        cout << "element " << element << " found on index " << index << endl;
    }
    else
    {
        cout << "element not found! " << endl;
    }
    return 0;
}