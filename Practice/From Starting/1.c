// creating an array adt
#include <stdio.h> 
#include <stdlib.h>

typedef struct myArray{
    int total_size;
    int used_size;
    int *ptr;
}myArray;

void createArray(myArray *myArr){
    printf("\nEnter Total size of array you want to create : \t");
    fflush(stdin);
    scanf("%d",&(myArr->total_size));
    
    printf("\nEnter size of array you want to use now : \t");
    scanf("%d",&(myArr->used_size));
    myArr->ptr = (int *) malloc(myArr->total_size * sizeof(int));
    printf("\n your array has been created successfully! \n");
}

void setArray(myArray *myArr){
    for (int i = 0; i < myArr->used_size; i++)
    {
        printf("Enter the value of element %d: \t ",i+1);
        scanf("%d",&(myArr->ptr[i]));
        printf("\n");
    }
}

void getArray(myArray *myArr){
    for (int i = 0; i < myArr->used_size; i++)
    {
        printf("the value of element %d: \t %d \n", i+1, myArr->ptr[i]);
    }
}

int main(){
    myArray marks;
    createArray(&marks);
    setArray(&marks);
    getArray(&marks);
    return 0;
}