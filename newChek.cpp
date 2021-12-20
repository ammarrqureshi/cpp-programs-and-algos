#include <iostream>
using namespace std;
int triplevalue(int n);
int tripleref(int &a);

int main(){
	int z;
	cout<<"Enter: ";
	cin>>z;
	cout<<z<<endl;
	cout<<triplevalue(z)<<endl;
	cout<<z<<endl<<endl;
	

	cout<<z<<endl;
	cout<<tripleref(z)<<endl;;
	cout<<z<<endl<<endl;
	
}
int triplevalue(int n){
	n=n+n+n;
	return n;
	
}
int tripleref(int &a){
	a=a+a+a;
	return a;
	
}

