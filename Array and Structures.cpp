#include <iostream>
using namespace std;

#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
struct Student
{
char Roll[10];
char Name[25];
int Marks[3];
int Total;

};



int main()
{
int i,j,p;
char name[25];
Student S[5];

for(int j=0; j<5; j++){
	S[j].Total = 0;
	cout << "\n\nEnter Student Roll : ";
cin >> S[j].Roll;
cout << "Enter Student Name : ";
cin >> S[j].Name;

// Loop for 3 Subject Marks for each Student
	for (i=0;i<3;i++){	
		cout << "Enter Marks " << i+1 << " : ";
		cin >> S[j].Marks[i];
		S[j].Total = S[j].Total + S[j].Marks[i];
	}

// Display the records ----
if (j==4){
	cout<< "Student No. " << "\t Name"<< "\t Regd No. "<<"\t Total Marks"<<endl;
for(i=0;i<5;i++){
	cout<< "Student No. " << i+1 << "\t"<<S[i].Name << "\t"<<S[i].Roll <<"\t"<<S[i].Total<<endl;
}

}
//////---------------------

}


}


