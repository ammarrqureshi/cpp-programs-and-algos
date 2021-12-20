#include <iostream>
using namespace std;
class linklist{
private:
struct node
{
    int data;
    node *next;
};
node *head;
public:
    linklist(){
        head=NULL;}
void insertion(int n);
void display();
void deletion(int n);
};
void linklist::display()
{
    if(head==NULL)
        cout<<"linklist is empty ";
    else
    {
        node *nodeptr=head;
        while(nodeptr!=NULL)
        {
            cout<<nodeptr->data<<endl;
            nodeptr=nodeptr->next;
        }
    }
}

void linklist::deletion(int n)
{
    if(head==NULL)
    {
        cout<<"linklist is empty, insert data first ";
    }
    else
    {
        if(head ->data==n) //if user want to delete first node
        {
            node *nodeptr=head;
            head=head->next;
            delete nodeptr;
        }
        else{
            node *nodeptr=head->next;
            node *prev=head;
            while(nodeptr!=NULL)
            {
                if(nodeptr->data==n)
                {
                    prev->next=nodeptr->next;
                    delete nodeptr;
                    break;
                }
                prev=nodeptr;
                nodeptr=nodeptr->next;
            }
        }
    }
}
void linklist::insertion(int n)
{
node *newnode=new node;
newnode->data=n;
newnode->next=NULL;

if(head==NULL)
{
    head=newnode;
}
else{

    node *curr=head;
    node *prev=NULL;
    while(curr!=NULL)
    {
        if(curr->data>=newnode->data)
        {
            break;
        }
        else{
            prev =curr;
            curr=curr->next;
        }

    }
    if(curr==head)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        newnode->next=curr;
        prev->next=newnode;
    }
}
}
int main()
{
    int n,a;
    linklist l1;
    do{
cout<<"Enter 1 for insertion, 2 for deletion,3 for displaying linklist and others to exit : "<<endl;
cin>>a;
switch(a){
case 1:{
    do{
    cout<<"Enter number to insert(00 to exit) : ";
    cin>>n;
    if(n!=00)
    l1.insertion(n);

    }while(n!=00);
    break;}
case 2:{
     do{
    cout<<"Enter number to delete (00 to exit) : ";
    cin>>n;
    if(n!=00)
    l1.deletion(n);

    }while(n!=00);
           break;}
case 3:
    {
        cout<<endl<<"linklist in sorted order = "<<endl;
        l1.display();
        break;
    }
default:
    cout<<endl<<"Program ended : ";
}}
while(a<=3);
}
