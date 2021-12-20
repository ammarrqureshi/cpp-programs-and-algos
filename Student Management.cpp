#include<iostream> 
#include<string.h>
#include<stdio.h>
using namespace std;
 struct Student 
{ 
 	 char name[30];  	
	char regd_no[10]; 
    float sdt_marks[3]; 
 	 
}s[5]; 
   
void alphabet_sequence(Student s[5]) 
{ 
 	for(int i=0;i<4;i++) 
for(int j=i+1;j<5;j++)    
 if(strcmp(s[i].name,s[j].name)>0) 
    swap(s[i],s[j]); 
 
} 
 
 
int main() 
 
{  A:   int i,j;    
 int a; 
     
 	do{ 
 	 	cout<<"\n\t\t\t\t Main Menu";  	 
	cout<<"\n\n\t\t\t\t1. Enter Student Record"<<endl; 
 	 	cout<<"\n\t\t\t\t2. Display Student Info"<<endl;  	 	
cout<<"\n\t\t\t\t3. Update Student Record"<<endl;  	 	
cout<<"\n\t\t\t\t4. Exit"<<endl; 
 	 	cin>>a;  	 	
switch(a) 
 	 	{  	 	 
case 1:  	 
 	for(i=0;i<5;i++) 
 	{ 
 	 	 
 	 	cout<<"\n\t\t\t\t-----------------------\n";
 	 	cout<<"\n \t\t\t\tEnter Details of  "<<" Student No. "<<i+1<<endl; 
 	 	 	fflush(stdin); 
 	 	 	cout<<"\n\t\t\t\t-----------------------\n";
 	 	cout<<" \t\t\t\tEnter Name: "; 
 	   cin.get(s[i].name,30); 
 
 	 	cout<<endl;  	 	 	
fflush(stdin); 
 	 	cout<<"\t\t\t\tEnter  Regd. No. :  ";  	 	
cin.get(s[i].regd_no,10); 
 	 	  
 	 	for(j=0;j<3;j++) 
 	 	 
 	 	{ 
 	 	 cout<<"\n\t\t\t\t-----------------------";
 	 	 	cout<<"\n\n \t\t\t\tEnter Marks of "<<j+1<<" Subject: "; 
 	 	 	cin>>s[i].sdt_marks[j]; 
 	 	} 
 	 
 	 	 
 	} 
 
 	 	alphabet_sequence(s); 
 
 	system("pause"); 
 	goto A; 
 	 
case 2:  
 cout<<"\n\t\t\t\t-----------------------\n";
cout<<"\n\n \t\t\t\tDisplay Students Records";
  	cout<<"\n\n \t\t\t\tNames "<<"\t  "<<"        Regd. No. "<<"\t"<<"   Marks of subjects "; 
 	for(i=0;i<5;i++) 
 	 	 
 	{ 
 	 
 	 	 cout << "\n\n\t\t\t\t"<< s[i].name<<"\t\t  "<< s[i].regd_no; 
 	 	 
 	 	 for(j=0;j<3;j++) 
 	 	 cout<<"\t\t"<< s[i].sdt_marks[j]; 
 	 	  
 	 
 	      
} 
goto A; case 3: char ch,name[30]; 
int n; 
cout<<"\n\t\t\t\t-----------------------\n";
        cout<<"\n\n\t\t\t\tDo You Want to Update marks of any Student: "; 
        cin>>ch; 
        while(ch!=n) 
        { 
 	 	 
  	fflush(stdin); 
            cout << "\n\n\t\t\t\tEnter Name of student to search his/her record: ";  
            cin.get( name,30);              
for (int i = 0; i < 5; i++)  
            {  
                if (strcmp(s[i].name, name )==0)  
                {  
                cout<<"\n\n\t\t\t\tSelect the Subject you want to update(1/2/3): "; 
                cin>>n; 
                cout<<"\n\n\t\t\t\tEnter the New Marks : "; 
                cin>>s[i].sdt_marks[n-1];                
 goto A; 
                 
            } 
        } 
         
                                          
} 
 
 	 
} 
} 	while(a<4); 
 cout<<"\n\n \t\t\t\tExit"; 
 
 
 
} 

