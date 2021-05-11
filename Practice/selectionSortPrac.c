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

void selectionSort(int * arr, int size){
    int indexOfMin;
    for (int i = 0; i < size-1; i++) // for passes
    {
        indexOfMin = i;
        for (int j = i+1; j < size ; j++) 
        {
            if(arr[j] < arr[indexOfMin]){
                indexOfMin = j;
            }
        }
        swap(&arr[i], &arr[indexOfMin]);
        
    }
    
}

int main(){
    int arr[] = {23,65,22,87,32,56,11,99,1};
    int size = 9;
    printArray(arr, size); // before sorting
    selectionSort(arr, size);
    printArray(arr, size); // after sorting
    return 0;
}