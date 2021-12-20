#include <iostream>
using namespace std;
void printArray(int array[], int arraySize){
	cout<<"[ ";
	for(int i=0; i<=arraySize-1; i++){
		if(i!=(arraySize-1)){
			cout<< array[i]<< " , ";
		}
		else{
			cout<<array[i];
		}
	}
	cout<<" ]";
}

int main(){
	int arrSize=8, arr1[arrSize]={1,3,4,5,6,7,6,7}, arrIndex, newArrValue;
	printArray(arr1,arrSize);
	cout<<endl<<"Enter the index where you want to add: "<<endl;
	cin>> arrIndex;
	
	cout<<"Enter the value for array Index: "<<endl;
	cin>>newArrValue;
	int j=arrSize;
	arrSize++;
	while(j>=arrIndex){
		arr1[j+1]= arr1[j];
		j--;
	}
	arr1[arrIndex]=newArrValue;

	arr1[arrIndex]=newArrValue;
	
	printArray(arr1,arrSize);
	
}
