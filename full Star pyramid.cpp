#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i,rows;

	cout<<"Enter the Number of Rows: ";
	cin>>rows;
cout<<endl<<endl;
int k;
for(int i=rows;i>=1;i--)
{
	for(int j=0;j<k;j++){
		cout<<" ";
	}
	k++;

	for(int j=i; j>=1;j--)
	{
		cout<<" *";
	}
	cout<<endl;
	
}
return 0;
}
