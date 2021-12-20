#include <iostream>
using namespace std;
int main()
{
	int roll_no;
	cout<<"Enter Roll No: "<<endl;
	cin>>roll_no;
	if (roll_no%2==0){
			cout<<"You are from Omega Section."<<endl;
	}
	else{
			cout<<"You are from Alpha Section. "<<endl;
	}
}
