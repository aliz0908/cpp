#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    string c;
    string a;
    int data;
    int key;
    Node* next;
    Node* customer;
};

struct Node* newNode(string c) 
{ 
    Node* temp = new Node; 
    temp->c = c; 
    temp->next = NULL; 
    return temp; 
}

struct Node* new_Node(string a) 
{ 
    Node* temp = new Node; 
    temp->a = a; 
    temp->customer = NULL; 
    return temp; 
}

void printList(struct Node* head) 
{ 
    while (head != NULL) { 
        cout << head->c << " "; 
        head = head->next; 
    } 
} 

void printf(struct Node* start) 
{ 
    while (start != NULL) { 
        cout << start->a << " "; 
        start = start->customer; 
    } 
} 
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

int main()
{
    cout<<"List of BROKERS  :\n";
    
    Node* head = newNode(" 1.Bond\n"); 
	
    head->next = newNode("2.Kelly\n"); 
	
    head->next->next = newNode("3.Nelson\n"); 
	
    head->next->next->next = newNode("4.Hall\n");
	printList(head);
    
    cout<<"Respective Query Numbers : BOND = 1" <<" KELLY = 2, NELSON = 3, HALL = 4 "<<endl;

    cout<<"Enter QUUERY NUMBER of Broker: \n";
	int x;
	cin>>x;
	

	push(&head, 1);  
    push(&head, 2);  
    push(&head, 3);  
    push(&head, 4);  

    search(head, x)? cout<<"Yes" : cout<<"No" ;
	cout<<endl;
    
    Node* start = new_Node("Customers:\n");
	if (x==1)
	{
		cout<<"Broker  Name: Bond \n";

        start->customer= new_Node("1.Grant 2.Scott 3.Vitto 4. Katz\n");
        printf(start);
    }	
        
        else if (x==2)
		{
			cout<<"Broker Name: Kelly";
            start->customer= new_Node("1.Hunter 2.McBride 3.Evans \n");
            printf(start);
        }
		
        else if (x==3)
		{
			cout<<"Broker Name: Neslson";
            start->customer= new_Node("1.Teller 2.Jones 3.Adams 4.Rogers\n");
            printf(start);
		}
		
        else
		{
			cout<<"Broker Name: Hall \n NO CUSTOMERS!";
		}
    
    
}