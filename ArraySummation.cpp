///////////PROGRAM FOR SUMMATION OF ARRAY/////////
#include <iostream>
using namespace std;

int main(){
	int n,num[n], sum=0;
	cout<<"Enter the index size for array: "<<endl;
	cin>>n;
	cout<<"Enter values for array: "<<endl;
	for(int i=0; i<n; i++){
		cin>>num[i];
		sum += num[i];
	}
	
	cout<<"Total sum of array values: "<<sum;
	
	return 0;
}
////////PROGRAM ENDS HERE////////
////////CREATED BY - AMMAR QURESHI///////
