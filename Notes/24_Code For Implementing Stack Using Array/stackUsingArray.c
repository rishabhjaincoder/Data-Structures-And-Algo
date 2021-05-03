#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    struct stack *stack1 = (struct stack *) malloc(sizeof(struct stack));
    stack1->size = 80;
    stack1->top = -1;
    stack1->arr = (int *)malloc(stack1->size * sizeof(int));

    // Pushing an element manually
    // stack1->arr[0] = 7;
    // stack1->top++;

    // Check if stack is empty
    if(isEmpty(stack1)){
        printf("\nThe stack is empty");
    }
    else{
        printf("\nThe stack is not empty");
    }
    return 0;
}