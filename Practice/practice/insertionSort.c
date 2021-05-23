#include <stdio.h> 

void printArray(int * arr, int size){
    for ( int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int * arr, int size){
    int key, j;
    for (int i = 1; i <=size-1; i++)
    {
        key = arr[i];
        j=i-1;
        while (j>=0 && arr[j]> key)
        {
            // swap(&arr[j+1], &arr[j]);
            arr[j+1] = arr[j];
            j--;
        }
        // handling when j becomes -1
        arr[j+1] = key;
    }
    
}

int main(){
    int arr[] = {23,65,22,87,32,56,11,99,1};
    int size = 9;
    printArray(arr, size); // before sorting
    insertionSort(arr, size);
    printArray(arr, size); // after sorting
    return 0;
}