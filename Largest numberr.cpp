#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Enter Three Numbers: "<<endl;
	cin>>x>>y>>z;
	if (x>y && x>z){
		cout<<"Largest Number: "<<x;
		
	}
	else if (y>z && y>x){
		cout<<"Largest Number: "<<y;
		
	}
	else if (z>y && z>x){
		cout<<"Largest Number: "<<z;
		
	}
}
