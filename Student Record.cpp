#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{
	struct Student{
		char roll_no[9];
		int pf_score;
	};
	
	Student S1{"0",0};
	Student S2{"0",0};
	Student S3{"0",0};
	

	mainMenu:
	int choice1;
	cout<<setw(20)<<"**********MAIN MENU**********"<<endl;
	cout<<setw(20)<<"Press 1 to Enter Student Record"<<endl;
	cout<<setw(20)<<"Press 2 to Display Student Record"<<endl;
	cout<<setw(20)<<"Press 3 to Exit"<<endl<<endl;
	cout<<setw(20)<<"Enter choice: "<<endl;
	cin>>choice1;
	
	switch (choice1){
		case 1:
			goto enterrecord;
		case 2:
			goto displayrecord;
		case 3:
			exit(0);
			
		
	}
	displayrecord:
		cout<<setw(10)<<"Roll No"<<setw(10)<<"PF Score"<<endl<<endl;
		cout<<setw(10)<<S1.roll_no<<setw(10)<<S1.pf_score<<endl<<endl;
		cout<<setw(10)<<S2.roll_no<<setw(10)<<S2.pf_score<<endl<<endl;
		cout<<setw(10)<<S3.roll_no<<setw(10)<<S3.pf_score<<endl<<endl;
		
		goto mainMenu;
		
		
	enterrecord:
		int choice2;
		cout<<setw(20)<<"Press 1 for 1st Student Record"<<endl;
		cout<<setw(20)<<"Press 2 for 2nd Student Record"<<endl;
		cout<<setw(20)<<"Press 3 for 3rd Student Record"<<endl;
		cout<<setw(20)<<"Press 4 to return to Main Menu"<<endl;
		cout<<setw(20)<<"Press 5 to Exit"<<endl;
		
		do{
			cout<<setw(20)<<"Enter choice: "<<endl<<endl;
		cin>>choice2;
			switch (choice2){
			case 1:
				cout<<"Enter Roll No: ";
				cin>>S1.roll_no;
				cout<<"Enter PF Score: ";
				cin>>S1.pf_score;
				break;
			case 2:
				cout<<"Enter Roll No: ";
				cin>>S2.roll_no;
				cout<<"Enter PF Score: ";
				cin>>S2.pf_score;
				break;
			case 3:
				cout<<"Enter Roll No: ";
				cin>>S3.roll_no;
				cout<<"Enter PF Score: ";
				cin>>S3.pf_score;
				break;
			case 4:
				goto mainMenu;
			case 5:
				exit(0);
				
				
		}
		}
		while(choice2!=4);
		
	return 0;
		
	
}
