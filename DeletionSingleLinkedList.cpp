#include <iostream>
using namespace std;

//list creation
class SinglyLinkedList
  {
    private:
    struct node
  {
    int data;
    node *next;
    node *previous;
  };
    node *head, *tail;
    public:
    SinglyLinkedList()
    {
      head=NULL;
      tail=NULL;
    }
    //creating new node for the list
    //same goes for adding node at end
    void new_node(int value)
    {
      node *temp=new node;
      temp->data=value;
      temp->next=NULL;
      if(head==NULL)
      {
        head=temp;
        tail=temp;
        temp=NULL;
      }
      else
      {	
        tail->next=temp;
        tail=temp;
      }
    }
    //FUNCTION TO PRINT THE ENTERED LIST
 void printList()
  {
    node *temp=new node;
    temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<"\t";
      temp=temp->next;
    }
  } 
	// FUNCTION FOR DELETING FIRST NODE
  void delete_first()
  {
    node *temp=new node;
    temp=head;
    head=head->next;
    delete temp;
  }
  //FUNCTION FOR DELETING LAST NODE
  void delete_last()
  {
    node *current=new node;
    node *previous=new node;
    current=head;
    while(current->next!=NULL)
    {
      previous=current;
      current=current->next;	
    }
    tail=previous;
    previous->next=NULL;
    delete current;
  }
  };	

//Driver Code
int main()
{
	int valueInput, counter;
	SinglyLinkedList list1;
	cout<<"Enter the No. of nodes to be entered: "<<endl;
	cin>>counter;
	cout<<"Enter the values:"<<endl;
	for(int i; i<counter; i++){
		cin>>valueInput;
		list1.new_node(valueInput);
	
	}
	list1.printList();
	cout<<endl;
	list1.delete_first();
	cout<<"After Deleting First Node: "<<endl;
	list1.printList();
	cout<<endl;
	list1.delete_last();
	cout<<"After Deleting Last Node: "<<endl;	
	list1.printList();
}

//CODE GENERATED BY AMMAR QURESHI