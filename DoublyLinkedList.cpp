
#include <bits/stdc++.h>
using namespace std;
 
/* a node of the doubly linked list */
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
};
 

void deleteNode(Node** head_ref, Node* todelete)
{
   
    if (*head_ref == NULL || todelete == NULL)
        return;
    if (*head_ref == todelete)
        *head_ref = todelete->next;
 
    if (todelete->next != NULL)
        todelete->next->prev = todelete->prev;
    if (todelete->prev != NULL)
       todelete->prev->next = todelete->next;
    free(todelete);
    return;
}

 

void insertNode(Node** head_ref, int new_data)
{
    
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = (*head_ref);
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}
 
void display(Node* node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}
 
/* Driver code*/
int main()
{
    Node* head = NULL;
 	int counter, valueInput;
 	cout<<"Enter the No. of nodes to be entered:"<<endl;
 	cin>>counter;
 	cout<<"Enter the values: "<<endl;
    for(int i; i<counter; i++){
    	cin>>valueInput;
    	insertNode(&head,valueInput);
	}
    
    cout << "Entered Linked list ";
    display(head);
    cout<<endl;
    deleteNode(&head, head);
    cout<<"List after deleting first node: "<<endl;
    display(head);
    
    cout<<endl;
    deleteNode(&head, head->next);
    cout<<"List after deleting last node: "<<endl;
    display(head);
 

 
    return 0;
}
