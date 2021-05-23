// linked list insertion all 4 cases
#include<iostream>
#include "linkedList.hpp" // here we are using linked list operation methods from this header file

using namespace std;

// typedef struct node{
//     int data;
//     struct node *next;
// }node;

// void linkedListTraversal(node* head){
//     node *ptr = (node *) malloc(sizeof(node));
//     ptr = head;
//     while (ptr!=NULL)
//     {
//         cout<< "Element: "<< ptr->data<<endl;
//         ptr = ptr->next;
//     }
// }

// // case: 1   Insert at first
// node* insertAtFirst(node* head, int data){
//     node *ptr = (node *) malloc(sizeof(node));
//     ptr->data = data;
//     ptr->next=head;
//     return ptr;
// }

// // case: 2   Insert at index
// node* insertAtIndex(node* head, int data, int index){
//     node *ptr = (node *) malloc(sizeof(node));
//     node *p = head;
//     int i=0;
//     while (i<index-1)
//     {
//         p = p->next;
//         i=i+1;
//     }
//     ptr->data = data;
//     ptr->next= p->next;
//     p->next= ptr;
//     return head;
// }

// // case: 3   Insert at last
// node* insertAtLast(node* head, int data){
//     node *ptr = (node *) malloc(sizeof(node));
//     node *p = head;
//     while (p->next!=NULL)
//     {
//         p = p->next;
//     }
//     ptr->data = data;
//     ptr->next=NULL;
//     p->next= ptr;
//     return head;
// }

// case: 4   Insert after node
// node* insertAfterNode(node* head, int data, node* p){
//     node *ptr = (node *) malloc(sizeof(node));
//     ptr->data = data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// }

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
    cout<<"\nbefore insertion"<<endl;
    linkedListTraversal(head);

    // // case 1
    head = insertAtFirst(head, 56);

    // case 2
    // int index= 2;
    // int element = 56;
    // head = insertAtIndex(head, element, index);

    // case 3
    // int element = 56;
    // head = insertAtLast(head, element);

    // case 4
    // int element = 56;
    // head = insertAfterNode(head, element, second);

    cout<<"\nafter insertion"<<endl;
    linkedListTraversal(head);
    return 0;
}