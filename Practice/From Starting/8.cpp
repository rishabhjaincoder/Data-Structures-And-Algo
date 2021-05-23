// linked list deletion all 4 cases
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
    // head = deleteAtFirst(head);

    // case 2
    // int index= 2;
    // head = deleteAtIndex(head, index);

    // case 3
    // head = deleteAtLast(head);

    // case 4
    head = deleteWithValue(head, 41);

    cout<<"\nafter insertion"<<endl;
    linkedListTraversal(head);
    return 0;
}