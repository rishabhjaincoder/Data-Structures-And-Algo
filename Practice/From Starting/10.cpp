// stack -> all the operations
#include<iostream>
#include "stack.hpp" // here i have implemented all the stack operations

using namespace std;

int main(){
    stack * stk = (stack *) malloc(sizeof(stack));
    stk->size = 5;
    stk->top = -1;
    
    stk->arr = (int *) malloc(stk->size * sizeof(int));
    
    push(stk, 99);
    push(stk, 3);
    push(stk, 9);
    push(stk, 19);
    push(stk, 49);
    push(stk, 75);

    // poping elements
    pop(stk);

    traversal(stk);

    cout<<"peek operation -> " << peek(stk, 2) <<endl;

    cout<<"stack top -> "<<stackTop(stk)<<endl;
    cout<<"stack bottom -> "<<stackBottom(stk)<<endl;

    // checking if the stack is empty or not;
    // (isEmpty(stk) ? cout<<"stack is empty\n" : cout<<"stack is not empty\n");

    // checking if the stack is full or not;
    // (isFull(stk) ? cout<<"stack is full\n" : cout<<"stack is not full\n");
    return 0;
}
