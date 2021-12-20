/////////////Program to check Palindrome Number///////////////

#include <iostream>
using namespace std;

int main(){
	
	int num ,new_num,reminder;
	int rev_num=0;
	
	cout<<"Enter a Number to check for Palindrome: "<<endl;
	cin>> num;
	new_num = num;
	while(num!=0)    
  {    
     reminder=num%10;      
     rev_num=rev_num*10+reminder;    
     num/=10;    
  } 
	
	if(new_num==rev_num){
		cout<<new_num<<" is a Palindrome"<<endl;
	}
	else{
		cout<<new_num<< " is not a Palindrome"<<endl;
	}
	
	return 0;
	
}
////////PROGRAM ENDS HERE//////////
//////////CREATED BY - AMMAR QURESHI//////
