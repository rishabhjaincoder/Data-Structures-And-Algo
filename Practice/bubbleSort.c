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

void bubbleSort(int * arr, int size){
    int temp;
    for (int i = 0; i < size-1; i++)
    {
        printf("Pass %d \n", i+1);
        for (int j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                // temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
            }
        }
        
    }
    
}

void bubbleSortAdaptive(int * arr, int size){
    int temp;
    int isSorted= 0;
    for (int i = 0; i < size-1; i++)
    {
        printf("Checking Pass %d \n", i+1);
        isSorted = 1;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                // temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted){
            return;
        }
        
    }
    
}

int main(){
    int arr[] = {23,65,22,87,32,56,11,99,1};
    // int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    printArray(arr, size); // before sorting
    // bubbleSort(arr, size);
    bubbleSortAdaptive(arr, size);
    printArray(arr, size); // after sorting
    return 0;
}