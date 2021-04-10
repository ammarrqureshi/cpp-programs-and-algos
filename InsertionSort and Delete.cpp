#include<iostream>	
#include<conio.h>	
using namespace std;
struct node{	
	int data;
	node *next;	
};
class Linklist{
	node *head;
	public:
		Linklist()
		{
			head = NULL;
		}
		void create(void);
		void sort(void);
		void display(void);
		void deletion(void);
};
void Linklist::create(){
	node *newl = NULL , *end = newl;
	int info;
	while(1){
		cout<<"Enter -999 to terminate the program\n";
		cout<<"Enter info\n";
		cin>>info;
		if(info==-999)
		break;
		else
		newl = new node;
		newl->data = info;
		if(head == NULL)
		head = newl;
		else
		end->next = newl;
		end = newl;
		end->next = NULL;
	}
}
void Linklist::sort(){
	node *ptr = new node;
	node *cpt = new node;
	ptr = head;
	while(ptr->next != NULL){
		cpt = ptr->next;
		while(cpt != NULL){
			if(ptr->data > cpt->data){
				swap(ptr->data , cpt->data);
			}
			cpt = cpt->next;
		}
		ptr = ptr->next;
	}
}
void Linklist::display(){
	node *temp = head;
	cout<<"The List You Entered Is As Under\n";
	while(head != NULL){
		cout<<temp->data;
		if(temp->next != NULL){
			cout<<" ==> ";
		}
		temp = temp->next;
	}
	delete(temp);
}
void Linklist::deletion(){
	int num;
	cout<<"Enter the number to delete in the linklist\n";
	cin>>num;
	node *p, *q;
	q = head;
	p = head->next;
	if(q->data == num){
		head = p;
		delete(q);
	}
	else{
		while(p->data != num){
			p = p->next;
			q = q->next;
		}
		if(p->next == NULL){
			q->next = NULL;
			delete(p);
		}
		else{
			q->next = p->next;
			delete(p);
		}
	}
}
int main(){
	Linklist o1;
	o1.create();
	o1.sort();
	o1.deletion();
	o1.display();
	getch();
	return 0;
}