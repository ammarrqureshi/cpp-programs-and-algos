#include <iostream>
using namespace std;
int main()
{
	int num=45;
	int user_input;
	
	do{
		
		int i;
		cout<<"Enter the Number: "<<endl;
		cin>>user_input;
		if (user_input==num){
		cout<<"Congratulations! You Did it."<<endl;
		break;
	}
		cout<<"Wrong Attempt! Please Try Again;"<<endl;
		i++;
		
	}
	while(user_input!=45);
	
	
}

