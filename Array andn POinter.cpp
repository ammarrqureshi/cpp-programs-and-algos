#include <iostream>
using namespace std;
int main()
{
	int array[6];
	int*ptr[6];
	cout<<"Enter a 6-digit Number separated by a Space: ";
	for(int i=0; i<6; i++)
	cin>>array[i];
	cout<<"After assigning to Pointer, Numbers Become: \n ";
	for (int i=0; i<6; i++)
	{
		ptr[i]=&array[i];
		cout<<*ptr[i]<<" ";
		
		}
	cout<<endl;
	cout<<" Reverse Numbers: "<<endl;
	for(int i=5; i>=0;i--)
	{
		cout<<*ptr[i]<<" ";
		}	
}
