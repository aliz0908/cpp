#include <bits/stdc++.h> 
using namespace std; 

 // Linked list Node structure 
class Node { 
	public:
    string c; 
	int key;
    struct Node* next; 
}; 
/*-----------------------------------------------------------*/
void push(Node** head_ref, int new_key)  
{  
    Node* new_node = new Node(); 
  	new_node->key = new_key;  
  	new_node->next = (*head_ref);  
  	(*head_ref) = new_node;  
}  
bool search(Node* head, int x)  
{  
    Node* current = head; // Initialize current  
    while (current != NULL)  
    {  
        if (current->key == x )  
            return true;  
        current = current->next;  
    }  
    return false;  
}  


// Function to create newNode 
// in a linked list 
struct Node* newNode(string c) 
{ 
    Node* temp = new Node; 
    temp->c = c; 
    temp->next = NULL; 
    return temp; 
}; 

// printing linked list 
void printList(struct Node* head) 
{ 
    while (head != NULL) { 
        cout << head->c << " "; 
        head = head->next; 
    } 
} 

void append(Node** head_ref, int new_data)   
{   
    
    // 1. allocate node  
    Node* new_node = new Node();  
    // Used in step 5  
    Node *last = *head_ref;  
     // 2. Put in the data  
    new_node->c = new_data;   
    // 3. This new node is going to be   
    // the last node, so make next of   
    // it as NULL 
    new_node->next = NULL;   
    // 4. If the Linked List is empty,  
    // then make the new node as head  
    if (*head_ref == NULL)   
    {   
        *head_ref = new_node;   
        return;   
    }   
    // 5. Else traverse till the last node  
    while (last->next != NULL)   
        last = last->next;   
    // 6. Change the next of last node  
    last->next = new_node;   
    return;   
}   

void deleteNode(struct Node **head_ref, int position) 
{ 
// If linked list is empty 
if (*head_ref == NULL) 
	return; 
  // Store head node 
   struct Node* temp = *head_ref; 
	// If head needs to be removed 
    if (position == 0) 
    { 
        *head_ref = temp->next;   // Change head 
        free(temp);               // free old head 
        return; 
    } 
  	// Find previous node of the node to be deleted 
    for (int i=0; temp!=NULL && i<position-1; i++) 
         temp = temp->next; 
  
    // If position is more than number of nodes 
    if (temp == NULL || temp->next == NULL) 
         return; 
  
    // Node temp->next is the node to be deleted 
    // Store pointer to the next of node to be deleted 
    struct Node *next = temp->next->next; 
  
    // Unlink the node from linked list 
    free(temp->next);  // Free memory 
  
    temp->next = next;  // Unlink the deleted node from list 
} 

// Driver program 
int main() 
{ 
    Node* head = newNode("Student Name:"); 
	cout<<endl;
    head->next = newNode("Father Name: "); 
	cout<<endl;
    head->next->next = newNode("Roll No:"); 
	cout<<endl;
    head->next->next->next = newNode("Semester:");
	cout<<endl; 
	head->next->next->next->next = newNode("CGPA:"); 
    cout<<endl;
	head->next->next->next->next->next = newNode("GPA:"); 
    cout<<endl;
	head->next->next->next->next->next->next = newNode("CNIC:"); 

    printList(head); 
	 cout<<endl;
	cout<<"Respective Query Numbers : Student Name 1" <<"Father name = 2, Roll No= 3, Semester=4, CGPA=5, GPA=6, CNIC=7" <<endl;
	cout<<"Enter query: "<<endl;
	int x;
	cin>>x;

	push(&head, 1);  
    push(&head, 2);  
    push(&head, 3);  
    push(&head, 4);  
    push(&head, 5);
	push(&head, 6);  
	push(&head, 7);     
  
    search(head, x)? cout<<"Yes" : cout<<"No" ;
	cout<<endl;
	if (x==1)
	{
		cout<<"Student Name: Boris";

		}	else if (x==2)
		{
			cout<<"Father Name: Vadim";
		}
		else if (x==3)
		{
			cout<<"Roll No:9843";
		}
		else if (x==4)
		{
			cout<<"Semester: 3rd";
		}
		else if (x==5)
		{
			cout<<"CGPA:4.0";
		}
		else if (x==6)
		{
			cout<<"GPA:3.7";
		}
		else
		{
			cout<<"CNIC:1234567890";
		}
		
	append(&head, 4);

	deleteNode(&head, 4); 
    puts("\nLinked List after Deletion at position 4: "); 
    printList(head);

	return 0; 
} 