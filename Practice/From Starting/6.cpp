// linkedlist creation and traversal
#include<iostream>
using namespace std;

typedef struct node{
    int data;
    struct node *next;
}node;

void linkedListTraversal(node* head){
    node *ptr = (node *) malloc(sizeof(node));
    ptr = head;
    while (ptr!=NULL)
    {
        cout<< "Element: "<< ptr->data<<endl;
        ptr = ptr->next;
    }
}

int main(){
    node *head;
    node *second;
    node *third;
    node *fourth;

    // allocating memory now
    head = (node *) malloc(sizeof(node));
    second = (node *) malloc(sizeof(node));
    third = (node *) malloc(sizeof(node));
    fourth = (node *) malloc(sizeof(node));

    // adding data and linking linked list
    head->data = 33;
    head->next = second;

    second->data = 41;
    second->next = third;

    third->data = 11;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = NULL;

    linkedListTraversal(head);

    return 0;
}