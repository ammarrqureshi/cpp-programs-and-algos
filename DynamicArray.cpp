#include <iostream>
using namespace std;
int main(){
	int n, arr[n];
	cout<<"Enter the Array Size: "<<endl;
	cin>>n;
	cout<<"Enter Array values:"<<endl;
	for(int i=0; i<=n; i++){
		cin>>arr[i];
	}
	///////EVEN NUMBERS//////////////////
	cout<<"Even numbers in Array: "<<endl;
	for(int i=0; i<=n; i++){
		if((arr[i]%2)==0){
			cout<<arr[i]<<',';
			
		}
	}
	/////////ODD NUMBERS///////////
	cout<<endl<<"Odd numbers in Array: "<<endl;
	for(int i=0; i<=n; i++){
		if((arr[i]%2)!=0){
			cout<<arr[i]<<',';
			
		}
	}
	
	//////PRIME NUMBERS///////
	
	
}
