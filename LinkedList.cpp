// A simple CPP program to introduce 
// a linked list 
#include <iostream>
#include <bits/stdc++.h>
class Node{
    public:
            int data;
            Node* next;
};
// Program to create a simple linked 
// list with 3 nodes 
int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    
    // allocate 3 nodes in the heap 

    head = new Node();
    second = new Node();
    third = new Node();

     /* Three blocks have been allocated dynamically.  
    We have pointers to these three blocks as head,  
    second and third      
    head           second           third  
        |                |               |  
        |                |               |  
    +---+-----+     +----+----+     +----+----+  
    | # | # |       | # | # |       | # | # |  
    +---+-----+     +----+----+     +----+----+  
# represents any random value.  
Data is random because we haven’t assigned  
anything yet */

    head->data= 1;// assign data in first node 
    head->next=second;// Link first node with 
    // the second node 

    /* data has been assigned to the data part of first  
    block (block pointed by the head). And next  
    pointer of the first block points to second.  
    So they both are linked.  
  
    head         second         third  
        |             |             |  
        |             |             |  
    +---+---+     +----+----+     +-----+----+  
    | 1 | o----->| # | # |     | # | # |  
    +---+---+     +----+----+     +-----+----+      
*/
    // assign data to second node 
    second->data=2;
    second->next=third;// Link second node with the third node 

    third->data=3;
    third->next=NULL;

    return 0;
}