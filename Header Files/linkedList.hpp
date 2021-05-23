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

// case: 1   Insert at first
node* insertAtFirst(node* head, int data){
    node *ptr = (node *) malloc(sizeof(node));
    ptr->data = data;
    ptr->next=head;
    head = ptr;
    return head;
}

// case: 2   Insert at index
node* insertAtIndex(node* head, int data, int index){
    node *ptr = (node *) malloc(sizeof(node));
    node *p = head;
    int i=0;
    while (i<index-1)
    {
        p = p->next;
        i=i+1;
    }
    ptr->data = data;
    ptr->next= p->next;
    p->next= ptr;
    return head;
}

// case: 3   Insert at last
node* insertAtLast(node* head, int data){
    node *ptr = (node *) malloc(sizeof(node));
    node *p = head;
    while (p->next!=NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next=NULL;
    p->next= ptr;
    return head;
}

// case: 4   Insert after node
node* insertAfterNode(node* head, int data, node* p){
    node *ptr = (node *) malloc(sizeof(node));
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// case: 1   delete at first
node* deleteAtFirst(node* head){
    node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// case: 2   delete at index
node* deleteAtIndex(node* head, int index){
    node *p = head;
    int i=0;
    while (i<index-1)
    {
        p = p->next;
        i=i+1;
    }
    node *ptr = p->next;
    p->next = ptr->next;
    free(ptr);
    return head;
}

// case: 3   delete at last
node* deleteAtLast(node* head){
    node *p = head;
    node *q = head->next;
    while (q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

// Case 4: Deleting the element with a given value from the linked list
node* deleteWithValue(node* head, int value){
    node*p = head;
    node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}

// these are operations of stack using linkedlist
int isEmpty(struct node* top){
    if (top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct node* top){
    struct node* p = (struct node*)malloc(sizeof(struct node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}