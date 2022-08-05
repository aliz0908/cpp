#include <bits/stdc++.h>
class Node{
    public:
    int data;
    Node* next;
};
/* Given a reference (pointer to pointer)  
to the head of a list and an int,  
inserts a new node on the front of the list. */
void push(Node** head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node();

    /* 2. put in the data */
    new_node->data=new_data;

    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);

    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth = NULL;
    
    head = new Node();
    second = new Node();
    third = new Node();
    fourth  = new Node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=NULL;

    void push();

    std::cin.get();
}