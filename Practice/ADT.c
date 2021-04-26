#include <stdio.h>
#include <stdlib.h>

typedef struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
}myArray;

void createArray(myArray * arr,int tsize, int usize ){
    printf("Enter the total size of array you want to Create ->\t");
    scanf("%d",&(arr->total_size));
    
    printf("\nEnter the size of array you want to use now ->\t");
    scanf("%d",&(arr->used_size));
    // arr->total_size = tsize;
    // arr->used_size = usize;
    arr->ptr = (int *) malloc(tsize * sizeof(int));  
}

void setArray(myArray * arr){
    int n;
    for(int i=0; i<arr->used_size; i++){
        printf("\nEnter the value of element %d ->\t",i+1);
        scanf("%d", &n);
        (arr->ptr)[i] = n;
    }
}

void getArray(myArray * arr){
    int n;
    printf("\nPrinting values of this ADT\n\n");
    for(int i=0; i<arr->used_size; i++){
        printf("the value of element %d ->\t %d\n",i+1, (arr->ptr)[i]);
    }
}

int main()
{
    myArray marks;
    createArray(&marks, 10, 2);
    setArray(&marks);
    getArray(&marks);

    return 0;
}