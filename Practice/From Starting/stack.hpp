#include<iostream>
#include <stdlib.h>

using namespace std;

typedef struct stack{
    int size;
    int top;
    int *arr;
}stack;

void traversal(stack* ptr){
    cout<<endl<<"Traversing Array\n";
    for (int i = 0; i <= ptr->top; i++)
    {
        cout<<ptr->arr[i]<<endl;
    }
    cout<<endl;
}

int isEmpty(stack* ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(stack* ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(stack * ptr, int value){
    if(isFull(ptr)){
        cout<<"\nstack is already full!"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
        cout<< "\npushed " << value;
    }
}

int pop(stack * ptr){
    if(isEmpty(ptr)){
        cout<<"\nstack is Empty, cannot pop the value!"<<endl;
    }
    else{
        int value = ptr->arr[ptr->top];
        ptr->top--;
        cout<< "\npopped " << value;
        return value;
    }
    return -1;
}

int stackTop(struct stack* ptr){
    return ptr->arr[ptr->top];
}

int stackBottom(struct stack* ptr){
    return ptr->arr[0];
}


int peek(stack *ptr, int i){
    // here i is not the index, its the reverse number of index in an array
    int arrayIndex = ptr->top -i +1;
    if(arrayIndex <0){
        cout<<"\nNot a valid position for the stack.\n";
        return -1;
    }
    return ptr->arr[arrayIndex];
}