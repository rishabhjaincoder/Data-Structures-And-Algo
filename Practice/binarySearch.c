#include <stdio.h> 

int binarySearch(int arr[], int element, int size){
    int low = 0;
    int high = size-1;
    // Keep searching until low <= high
    while (low<=high)
    {
        int mid = (high + low)/2;
        if( arr[mid] == element){
            return mid;
        }
        if (arr[mid] < element){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    
    return -1;
}

int main(){
    // will sort only sorted array
    int arr[9] = {32,156,211,332,465,577,654,740,821};    
    int element=740;
    int size = sizeof(arr)/sizeof(int);
    int index = binarySearch(arr, element, size);
    if(index>=0){
        printf("element %d found at index %d.\n", element, index);
    }
    else{
        // when index is -1
        printf("element %d not found!\n", element);
    }
    return 0;
}