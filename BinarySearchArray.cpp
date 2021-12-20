#include <iostream>
using namespace std;
int binarySearchArray(int array[2], int index1, int index_last, int target){
	int middleIndex;
	if(index_last>=index1){
		middleIndex= ((index1+index_last)/2);
		if(array[middleIndex]==target){
			return middleIndex;
		}
		else if(array[middleIndex]<target){
			return binarySearchArray(array, middleIndex, index_last, target);
		}
		else{
			return binarySearchArray(array, index1, middleIndex, target);
		}
		return -1;
	}

	
	
		
	}

int main()
{
	int arr1[2], searchNumber;
	cout<<"Enter the sorted Array values: "<<endl;
	for(int i=0; i<=1; i++){
		
		cin>>arr1[i];
		
	}
	cout<<"["<<arr1[0]<<arr1[1]<<"]"<<endl;
	
	cout<<"Enter to Search the Number: "<< endl;
	cin>>searchNumber;
		
	int searchIndex=binarySearchArray(arr1, 0,2,searchNumber);
	
	cout<<"Index of your Searched Number: " <<searchIndex<<endl;
	
	cout<< "------------Note: Array index start from 0!-----------"<<endl;
	return 0;
}

