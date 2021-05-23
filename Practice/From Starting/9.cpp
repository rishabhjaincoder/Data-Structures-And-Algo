// stack -> creation of stack
#include<iostream>
#include "stack.hpp" // here i have implemented all the stack operations

using namespace std;

int main(){
    stack * stk = (stack *) malloc(sizeof(stack));
    stk->size = 100;
    stk->top = -1;
    
    // stk->arr = (int *) malloc(stk->size * sizeof(int));
    (*stk).arr = (int *) malloc(stk->size * sizeof(int));
    
    // manually adding an element in the array.
    stk->arr[0] = 100;
    stk->top++;

    // checking if the stack is empty or not;
    (isEmpty(stk) ? cout<<"stack is empty\n" : cout<<"stack is not empty\n");

    // checking if the stack is full or not;
    (isFull(stk) ? cout<<"stack is full\n" : cout<<"stack is not full\n");
    return 0;
}