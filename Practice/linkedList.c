#include <stdio.h> 
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node* ptr){
    printf("\n-----------------------------Linked List Traversal-----------------------------\n");
    while (ptr!=NULL)
    {
        printf("value is %d\t",ptr->data);
        ptr = ptr->next;
    }
    
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // allocating memory
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 90;
    head->next = second;

    second->data = 110;
    second->next = third;

    third->data = 190;
    third->next = fourth;

    fourth->data = 290;
    fourth->next = NULL;

    LinkedListTraversal(head);

    return 0;
}