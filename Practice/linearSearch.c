#include <stdio.h> 

int linearSearch(int arr[], int element, int size){
    // traverse sequentially
    for (int index=0; index < size; index++)
    {
        if(arr[index]==element){
            return index;
        }
    }
    return -1;
}

int main(){
    int arr[9] = {32,56,11,32,65,77,54,40,21};    
    int element=32;
    int size = sizeof(arr)/sizeof(int);
    int index = linearSearch(arr, element, size);
    if(index>=0){
        printf("element %d found at index %d.\n", element, index);
    }
    else{
        // when index is -1
        printf("element %d not found!\n", element);
    }
    return 0;
}